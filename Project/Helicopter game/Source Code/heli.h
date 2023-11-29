#ifndef HELI_H_INCLUDED
#define HELI_H_INCLUDED

#include "loader.h"
#include "obstacles.h"
#include "timer.h"

class Heli:public Timer       
{
    private:
    int xVel, yVel;
    static int score;       

    public:
    SDL_Rect box;
    Heli();                 
    void handle_input();
    void move();
    void show();
    void set_camera();

    static int get_score();
};
int Heli::score=0;         
Heli::Heli()
{
    box.x =350;                             
    box.y =350;
    box.w = HELI_WIDTH;
    box.h = HELI_HEIGHT;
    xVel = 0;
    yVel = 5;
}

int Heli:: get_score()
{
    return score;
}

void Heli::handle_input()
{
    if( event.type == SDL_KEYDOWN )
    {
        switch( event.key.keysym.sym )
        {
            case SDLK_UP: yVel -= HELI_HEIGHT / 2;
                break;
            case SDLK_DOWN: yVel += HELI_HEIGHT / 5; break;
            default:
                break;

        }
        score+=2;
    }
    else if( event.type == SDL_KEYUP )
    {
        switch( event.key.keysym.sym )
        {
            case SDLK_UP: yVel += HELI_HEIGHT / 2; break;
            case SDLK_DOWN: yVel -= HELI_HEIGHT / 5; break;

            default:
                break;
        }
        score+=1;
    }
}

void Heli::move()
{
    box.y += yVel;
    boom=Mix_LoadWAV("sound/boom.wav");        


    for(int i=0;i<7;++i)            
    {
        if( ( box.y < 0 ) || ( box.y + HELI_HEIGHT > SCREEN_HEIGHT ) ||( check_collision( box, wall2 )|| check_collision(box,wall3[i])))
        {
            box.y -= yVel;
            Mix_FreeMusic( music );
            heli=NULL;
            heli=load_image("images/dandan edited.png",1);   
            game_over=load_image("images/game_over.png");

            apply_surface(box.x,box.y,heli,screen);
            SDL_Flip(screen);
            Mix_PlayChannel(-1,boom,0);            

            SDL_Flip(screen);
            apply_surface(0,0,game_over,screen);

            SDL_Delay(2000);
            SDL_Flip(screen);

        }
    }
}

void Heli::show()
{
    apply_surface( box.x - camera.x, box.y - camera.y, heli, screen );
}

void Heli::set_camera()
{
    camera.x = ( box.x + HELI_WIDTH / 2 ) - SCREEN_WIDTH / 2;
    camera.y = (box.y + HELI_HEIGHT / 2 ) - SCREEN_HEIGHT / 2;
    if( camera.x < 0 )
    {
        camera.x = 0;
    }
    if( camera.y < 0 )
    {
        camera.y = 0;
    }
    if( camera.x > LEVEL_WIDTH - camera.w )
    {
        camera.x = LEVEL_WIDTH - camera.w;
    }
    if( camera.y > LEVEL_HEIGHT - camera.h )
    {
        camera.y = LEVEL_HEIGHT - camera.h;
    }
}

#endif
