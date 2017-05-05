#include "SDL_Setup.h"

CSDL_Setup::CSDL_Setup()
{
    SDL_Init(SDL_INIT_EVERYTHING);

     window = SDL_CreateWindow("RPG", 0,0,450,450, SDL_WINDOW_SHOWN);

    if(window == nullptr)
    {
        std::cout << "SDL_CreateWindow Error" << SDL_GetError() << std::endl;
    }
   
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    
    if(renderer == nullptr)
    {
        std::cout << "SDL_CreateRenderer Error" << SDL_GetError() << std::endl;
    }

    mainEvent= new SDL_Event();
}

void CSDL_Setup::begin()
{
    SDL_PollEvent(mainEvent);
    SDL_RenderClear(renderer);
}

void CSDL_Setup::end()
{
    SDL_RenderPresent(renderer);
}

SDL_Event *CSDL_Setup::getMainEvent()
{
    return mainEvent;
}

SDL_Renderer *CSDL_Setup::getRenderer()
{
    return renderer;
}

CSDL_Setup::~CSDL_Setup()
{
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);
    delete mainEvent;
}