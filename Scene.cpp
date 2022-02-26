#include "Scene.h"


Scene::Scene(){
    
}
Scene::~Scene(){

}
Boid Scene::getBoid(int i){
    return boids[i];
}
void Scene::addBoid(Boid boid){
    boids.push_back(boid);
}
int Scene::boidsCount(){
    return boids.size();
}
