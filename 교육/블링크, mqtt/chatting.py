import paho.mqtt.client as mqtt
import threading

def publish_message():
    data = input("Enter message: ")
    client.publish("hi/2", data)

def do_connect(client, userdata, flags, rc):
    print("ok connect")
    client.subscribe("hi/1")
    publish_message()
    
def do_message(client, userdata, message):
    print("\n[%s] %s"%(message.topic, message.payload.decode()))
    
    
def do_publish(client, userdata, mid):
    publish_message()
    
client = mqtt.Client()
client.on_connect = do_connect
client.on_message = do_message
client.on_publish = do_publish

client.connect("192.168.101.101")  
client.loop_forever()