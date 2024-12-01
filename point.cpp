#include "point.h"
#include <sstream>
#include <iomanip>

Point::Point(double x, double y): x(x), y(y){}

double Point::getX(){
    return x;
}
double Point::geyY(){
    return y;
}

bool Point::equals (Point &other){
    return other.x == x && other.y == y;
}

string Point::toString(){
    ostringstream oss;
    oss << fixed << setprecision(1);
    oss << "Point("<< x << ", " << y << ")";
    return oss.str();
}

void Point::flip(){
    x=-x;
    y=-y;
}
void Point::move(double x, double y){
    this->x+=x;
    this->y+=y;
}
