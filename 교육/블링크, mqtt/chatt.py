import paho.mqtt.client as mqtt
import threading
nic_name = None
def __task_publish(client):
    topic = "hello/" + nic_name + "/chat"
    data = input()
    client.publish(topic, data)
def do_connect(client, usrdata, flags, rc):
    if rc == 0:
        print("hi~ %s"%(nic_name))
        client.subscribe("hello/+/chat") 
        threading.Thread(target=__task_publish, args=(client,)).start()
    else:
        print("not connect")
def do_publish(client, usrdata, mid):
    threading.Thread(target=__task_publish, args=(client,)).start()
def do_message(client, usrdata, message):
    t_nic_name = message.topic.split('/')[1]
    if nic_name != t_nic_name:
        print(' ' * 40, "[%s] %s"%(t_nic_name, message.payload.decode()))
def main():
    global nic_name
    
    nic_name = input("your nic name: ")
    client = mqtt.Client()
    client.on_connect = do_connect
    client.on_publish = do_publish
    client.on_message = do_message
    client.connect("192.168.101.101") #실제 브로커 주소 사용
    client.loop_forever()
if __name__ == "__main__":
    main()