#include"Mysub.h"

int main(int argc, char **argv){


    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<MySubscriber>());
    rclcpp::shutdown();

    return 0;

}