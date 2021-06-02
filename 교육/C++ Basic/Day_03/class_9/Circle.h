#pragma once

#include<iostream>
using namespace std;

class Circle {
    int radius;         // private

public:
    Circle();
    Circle(int r);
    double getArea();

    void setRadius(int r) {
        radius = r;
    }

    int getRadius() {
        return radius;
    }
};
