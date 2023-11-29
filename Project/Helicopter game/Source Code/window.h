#ifndef WINDOW_H_INCLUDED
#define WINDOW_H_INCLUDED
#include "heli.h"
#include "loader.h"
class Window
{
    private:
    bool windowed;
    bool windowOK;

    public:
    Window();
    void handle_events();
    void toggle_fullscreen();

    bool error();
};

Window::Window()
{
    screen = SDL_SetVideoMode( SCREEN_WIDTH, SCREEN_HEIGHT, SCREEN_BPP, SDL_SWSURFACE | SDL_FULLSCREEN );
    if( screen == NULL )
    {
        windowOK = false;
        return;
    }
    else
    {
        windowOK = true;
    }
    windowed = true;
}

void Window::handle_events()
{
    if( windowOK == false )
    {
        return;
    }
    if( event.type == SDL_VIDEORESIZE )
    {
        screen = SDL_SetVideoMode( event.resize.w, event.resize.h, SCREEN_BPP, SDL_SWSURFACE | SDL_RESIZABLE );

        if( screen == NULL )
        {
            windowOK = false;
            return;
        }
    }
    
    else if( ( event.type == SDL_KEYDOWN ) && ( event.key.keysym.sym == SDLK_RETURN ) )
    {
        toggle_fullscreen();
    }
    else if( event.type == SDL_ACTIVEEVENT )
    {
        if( event.active.state & SDL_APPACTIVE )
        {
            if( event.active.gain == 0 )
            {
            }
            else
            {
            }
        }
        else if( event.active.state & SDL_APPINPUTFOCUS )
        {
            if( event.active.gain == 0 )
            {
            }
            else
            {
            }
        }
        else if( event.active.state & SDL_APPMOUSEFOCUS )
        {
            if( event.active.gain == 0 )
            {
            }
            else
            {
            }
        }
    }
    else if( event.type == SDL_VIDEOEXPOSE )
    {
        if( SDL_Flip( screen ) == -1 )
        {
            windowOK = false;
            return;
        }
    }
}

void Window::toggle_fullscreen()
{
    if( windowed == true )
    {
        screen = SDL_SetVideoMode( SCREEN_WIDTH, SCREEN_HEIGHT, SCREEN_BPP, SDL_SWSURFACE | SDL_RESIZABLE | SDL_FULLSCREEN );

        if( screen == NULL )
        {
            windowOK = false;
            return;
        }
        windowed = false;
    }
    else if( windowed == false )
    {
        screen = SDL_SetVideoMode( SCREEN_WIDTH, SCREEN_HEIGHT, SCREEN_BPP, SDL_SWSURFACE | SDL_RESIZABLE );
        if( screen == NULL )
        {
            windowOK = false;
            return;
        }

        windowed = true;
    }
}

bool Window::error()
{
    return !windowOK;
}

#endif
