#include <SDL2/SDL.h>
#include <iostream>

int main(int argc , char **argv)
{
    //SDL Init
    SDL_Init(SDL_INIT_EVERYTHING);

    //SDL Create Window
    SDL_Window* UMIWindow = SDL_CreateWindow("UMIDisplay 1.0.0 t" , 68,88,800,480,SDL_WINDOW_ALLOW_HIGHDPI);

    //SDL Proc
    SDL_Event UMIWindowEvent ; 
    while (true)
    {
       
        if(SDL_PollEvent(&UMIWindowEvent))
        {
            if(SDL_QUIT == UMIWindowEvent.type)
            {break;}
        }
    }

    //SDL Destroy
    SDL_DestroyWindow( UMIWindow );
    SDL_Quit();
    
    return EXIT_SUCCESS; 
}