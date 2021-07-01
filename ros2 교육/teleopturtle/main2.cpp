//#include <memory>
#include "TeleopTurtle2.h"
#include <iostream>

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  
  std::shared_ptr<TeleopTurtle> teleopTurtle = std::make_shared<TeleopTurtle>();
  //rclcpp::spin(std::make_shared<TeleopTurtle>());
  //rclcpp::spin(teleopTurtle);

  for(;;)
  {
    std::cout << "input key(i,m,j,l): ";
    char ch;
    std::cin >> ch;

    switch(ch)
    {
    case 'i': case 'I':
      teleopTurtle->forward(); 
      break;
    case 'm': case 'M':
      teleopTurtle->backward(); 
      break;
    case 'j': case 'J':
      teleopTurtle->rotateLeft(); 
      break;
    case 'l': case 'L':
      teleopTurtle->rotateRight(); 
      break;
    }
  }

  rclcpp::shutdown();

  return 0;
}