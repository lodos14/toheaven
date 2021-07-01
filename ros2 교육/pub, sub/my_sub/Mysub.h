#ifndef MY_SUB_H
#define MY_SUB_H

#include <rclcpp/rclcpp.hpp>
#include<std_msgs/msg/string.hpp>
#include <memory>

//using std_msgs::msg::String;

class MySubscriber : public rclcpp::Node {

public:

    MySubscriber();



private:

    void msg_callback(std_msgs::msg::String::SharedPtr msg) const;

    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr subscription_;


};

#endif