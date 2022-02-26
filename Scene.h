#ifndef Scene_h
#define Scene_h
#include "Boid.h"
#include <vector>
class Scene {
    private:
        std::vector<Boid> boids;

    public:
        Scene();
        ~Scene();
        Boid getBoid(int i);
        void addBoid(Boid boid);
        int boidsCount(){
            return boids.size();
        }
};

#endif /* Scene_h */