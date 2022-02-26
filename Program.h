#ifndef Program_h
#define Program_h
#include <SDL2/SDL.h>
#include "Scene.h"

class Program {
    private:
        SDL_Window *window;
        SDL_Renderer *renderer;
        int FPS;
        int SCREEN_WIDTH;
        int SCREEN_HEIGHT;
        bool running;
        Scene scene;     


    public:
    Program();
    ~Program();
    bool isRunning();
    void handleEvents();
    void update();
    void render();
    void clean();
    int getFPS();
};


#endif /* Program_h */