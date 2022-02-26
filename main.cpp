#include <SDL2/SDL.h>
#include <stdio.h>
#include "Program.h"



int main(int argc, char** argv){
    Program game{Program()};
    const int frameDelay = 1000 / ((float) game.getFPS());
    while (game.isRunning())
    {
        Uint32 frameStart;
        int frameTime;
        frameStart = SDL_GetTicks();
        game.handleEvents();
        game.update();
        game.render();
        frameTime = SDL_GetTicks() - frameStart;
            if (frameDelay > frameTime)
			{
				SDL_Delay(frameDelay - frameTime);
			}
    }
    game.clean();
    return 0;