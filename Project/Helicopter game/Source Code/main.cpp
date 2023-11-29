#include "SDL.h"
#include "SDL_image.h"
#include <SDL_mixer.h>
#include <string>
#include "heli.h"
#include "loader.h"
#include "timer.h"
#include "window.h"
#include "obstacles.h"
#include "game_functions.h"
#include "play.h"

int main(int argc, char* args[])
{
    bool cont=true;
    if( init() == false )
    {
        return 1;
    }

    Window my;
    my.toggle_fullscreen();
    wel_come(); 
    int opt;
    while(cont)
    {
        opt=game_menu();   
        switch(opt)
        {
            case 1:
                play(); 
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                cont=false;
                break;
            default:
                break;

        }
    }

    clean_up();  
    return 0;
}
