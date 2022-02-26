#include "Point.h"

Point::Point(){
    x = 0;
    y = 0;
    z = 0;
}

Point::Point(double px, double py, double pz){
    x = px;
    y = py;
    z = pz;
}

Point::~Point(){

}


double Point::getX(){
    return x;
}

double Point::getY(){
    return y;
}

double Point::getZ(){
    return z;
}

void Point::translate(double dx, double dy, double dz){
    x += dx;
    y += dy;
    z += dz;
}