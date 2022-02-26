#ifndef Boid_h
#define Boid_h
#include "Point.h"

class Boid {
    private:
        Point position;
        double speed;
    
    public:
        Boid();
        Boid(Point pos, double spd);
        ~Boid();
        Point getPos();
        double getSpeed();
        void translate(double dx, double dy, double dz);
};

#endif /* Boid_h */