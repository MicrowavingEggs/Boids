#include <SDL2/SDL.h>
#include <stdio.h>
#include "Program.h"

const Uint8* state = SDL_GetKeyboardState(NULL);

Program::Program(){
    running = true;
    SCREEN_WIDTH = 1600;
    SCREEN_HEIGHT = 900;
    FPS = 60;
    window = SDL_CreateWindow("Boids", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, 0);
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    scene = Scene();
}

Program::~Program(){
    double playerAngle = player.getAngle();
    <double x = player.getPx();
    double y = player.getPy();
    double z = player.getPz();
    if (state[SDL_SCANCODE_UP])
    {
        scene.translate(0,0,-speed);
    }

    if (state[SDL_SCANCODE_DOWN])
    {
        scene.translate(0,0,speed);
    }

    if (state[SDL_SCANCODE_Q])
    {
        scene.translate(speed,0,0);
    }

    if (state[SDL_SCANCODE_E])
    {
        scene.translate(-speed,0,0);
    }

    if (state[SDL_SCANCODE_LEFT])
    {
        scene.rotate(x,y,z,-VAngle);
    }

    if (state[SDL_SCANCODE_RIGHT])
    {
        scene.rotate(x,y,z,VAngle);
    }

    if (state[SDL_SCANCODE_SPACE])
    {
        int playerJumpingState{player.getJumpingState()};
        if (playerJumpingState < 60){
            ZOffset = 450 + 80*cos((M_PI/2.) + 2*M_PI*playerJumpingState/59.);
            player.incrJumpingState();
        }
        else{
            player.resetJump();			
        }
    }
    if (state[SDL_SCANCODE_TAB]){
        
        }
    }
}

bool Program::isRunning(){
return running;
}

void Program::handleEvents(){
SDL_Event event;
    SDL_PollEvent(&event);

    switch (event.type)
    {
    case SDL_QUIT:
        running = false;
        break;
    default:
        break;
    }
}


void Program::render(){

}

void Program::clean(){

}

int Program::getFPS(){

}