#ifndef LOADER_H_INCLUDED
#define LOADER_H_INCLUDED
#include"SDL.h"
#include "SDL_image.h"
#include <string>
#include <SDL_mixer.h>
#include <SDL_ttf.h>
#include "obstacles.h"
#include "variables.h"

SDL_Surface *load_image( std::string filename,int n=0 )
{
    SDL_Surface* loadedImage = NULL;
    SDL_Surface* optimizedImage = NULL;
    loadedImage = IMG_Load( filename.c_str() );
    if( loadedImage != NULL )
    {
        optimizedImage = SDL_DisplayFormat( loadedImage );
        SDL_FreeSurface( loadedImage );
        if( optimizedImage != NULL )
        {
            if(n==0)
            {
            Uint32 colorkey = SDL_MapRGB( optimizedImage->format, 73, 203, 58 );
            SDL_SetColorKey( optimizedImage, SDL_SRCCOLORKEY, colorkey );
            }
            else if(n==1)
            {
            Uint32 colorkey = SDL_MapRGB( optimizedImage->format, 255, 255, 128 );
            SDL_SetColorKey( optimizedImage, SDL_SRCCOLORKEY, colorkey );
            }
        }
    }

    return optimizedImage;
}
bool load_files()
{
    background = load_image( "images/new pahad with same resoln.png" );
    if( background == NULL )
    {
        return false;
    }
    font = TTF_OpenFont( "VINERITC.ttf", 30 );
    if( font == NULL )
    {
        return false;
    }
    OBSTACLES=load_image("images/hitwalls.bmp");
    if(OBSTACLES==NULL)
    {
        return false;
    }
    transparent=load_image("images/transparent.png");
    heli = load_image( "images/heli.png" );
    if( heli == NULL )
    {
        return false;
    }
    music = Mix_LoadMUS( "sound/heli-running2.wav" );
    if( music == NULL )
    {
        return false;
    }
    return true;
}
bool init()
{
    if( SDL_Init( SDL_INIT_EVERYTHING ) == -1 )
    {
        return false;
    }
    screen = SDL_SetVideoMode( SCREEN_WIDTH, SCREEN_HEIGHT, SCREEN_BPP, SDL_SWSURFACE );
    if( screen == NULL )
    {
        return false;
    }
    if( TTF_Init() == -1 )
    {
        return false;
    }
    if( Mix_OpenAudio( 22050, MIX_DEFAULT_FORMAT, 2, 4096 ) == -1 )
    {
        return false;
    }
    SDL_WM_SetCaption( "HELICOPTER HURDLE !!", NULL );
    return true;
}
void clean_up()
{
    SDL_FreeSurface( heli );
    SDL_FreeSurface(OBSTACLES);
    SDL_FreeSurface( background );
    SDL_FreeSurface( welcome);
    SDL_FreeSurface( transparent);
    TTF_CloseFont( font );
    Mix_FreeMusic( music );
    Mix_FreeChunk(boom);
    Mix_FreeChunk(loading);
    TTF_Quit();
    Mix_CloseAudio();
    SDL_Quit();
}
#endif
