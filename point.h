#include <iostream>
#include <string>
using namespace std;
#ifndef POINT_H
#define POINT_H


class Point{
private:
    double x;
    double y;
public:
    Point(double x, double y);
    bool equals(const Point &other);
    string toString();
    void flip();
    void move(double x, double y);
    double getX();
    double getY();
};
#endif