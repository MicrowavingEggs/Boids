#include "Boid.h"


Boid::Boid(){
    position = Point();
    speed = 1.;
}

Boid::Boid(Point pos, double spd){
    position = pos;
    speed = spd;
}

Boid::~Boid(){

}

Point Boid::getPos(){
    return position;
}

double Boid::getSpeed(){
    return speed;
}