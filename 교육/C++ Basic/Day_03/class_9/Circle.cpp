

#include<iostream>
using namespace std;
#include"Circle.h"

Circle::Circle() {
    radius = 1;
}

Circle::Circle(int r) {
    radius = r;
}

double Circle::getArea() {
    return radius * radius * 3.14;
}
