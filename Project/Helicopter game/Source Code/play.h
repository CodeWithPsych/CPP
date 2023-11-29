#ifndef PLAY_H_INCLUDED
#define PLAY_H_INCLUDED
void wel_come()                                 
{
    welcome=load_image("images/welcome.png");
    apply_surface(0,0,welcome,screen);
    loading=Mix_LoadWAV("sound/loading.wav");
    Mix_PlayChannel(-1,loading,0);
    SDL_Flip(screen);
    SDL_Delay(2000);
}
void wall3_coord()                                 
{
    wall3[0].x =0;  wall3[0].w=30;  wall3[0].h=234;
    wall3[0].y =0;
    wall3[1].x =0;  wall3[1].w=30;  wall3[1].h=234;
    wall3[1].y =400;
    wall3[2].x =650;  wall3[2].w=30;  wall3[2].h=234;
    wall3[2].y =50;
    wall3[3].x =950;  wall3[3].w=30;  wall3[3].h=234;
    wall3[3].y =450;
    wall3[4].x =1200;  wall3[4].w=30;  wall3[4].h=234;
    wall3[4].y =90;
    wall3[5].x =1500;  wall3[5].w=30;  wall3[5].h=234;
    wall3[5].y =303;
    wall3[6].x =1700;  wall3[6].w=30;  wall3[6].h=234;
    wall3[6].y =502;
}
int play()
{
        wall2.x=0;
        wall2.y=SCREEN_HEIGHT;
        wall2.w=SCREEN_WIDTH;
        wall2.h=20;

        wall3_coord();
    bool quit = false;
    int bgX = 0, bgY = 0;
    Heli myheli;                      
    Timer fps;                    
    obstacle obs;                       

    Window myWindow;

    if( myWindow.error() == true )
    {
        return 1;
    }

    if( load_files() == false )
    {
        return 1;
    }


    fps.start();

    while( quit == false )
    {
        if( Mix_PlayMusic( music, 0 ) == -1 )       
        {
            return 1;
        }
        while( SDL_PollEvent( &event ) )
        {
            
            myWindow.handle_events();
            myheli.handle_input();

            if(event.type==SDL_KEYDOWN)
            {
                 if( event.key.keysym.sym==SDLK_ESCAPE)
                {
                        Mix_FreeMusic( music );
                          quit=true;
                }

                else if( event.type == SDL_QUIT )
                {
                    quit = true;
                }

            }
        }
        if(fps.get_ticks()<10000)
        {
            bgX -= 10;
            for(int i=0;i<7;++i)
            {
                wall3[i].x-=10;
            }

        }
        else if(fps.get_ticks()<40000)
        {

            bgX-=15;
            for(int i=0;i<7;++i)
            {
                wall3[i].x-=15;
            }
        }
        else if(fps.get_ticks()<90000)
        {

            bgX-=20;
            for(int i=0;i<7;++i)
            {
                wall3[i].x-=20; 
            }
        }

        else if(fps.get_ticks()<120000)
        {

            bgX-=25;
            for(int i=0;i<7;++i)
            {
                wall3[i].x-=25;   
            }
        }

        else
        {

            bgX-=30;

            for(int i=0;i<7;++i)
            {
                wall3[i].x-=10; 
            }
        }
        if( bgX <= -background->w )
        {
            bgX = 0;

            wall3[0].x =0;
            wall3[0].y =0;
            wall3[1].x =0;
            wall3[1].y =400;
            wall3[2].x =650;
            wall3[2].y =50;
            wall3[3].x =950;
            wall3[3].y =450;
            wall3[4].x =1200;
            wall3[4].y =90;
            wall3[5].x =1500;
            wall3[5].y =303;
            wall3[6].x =1700;
            wall3[6].y =502;

        }
        apply_surface( bgX, bgY, background, screen );
        apply_surface( bgX + background->w, bgY, background, screen );

        if( myWindow.error() == true )
        {
            return 1;
        }

        myheli.move();

        myheli.show();
        obs.show();    

        update_screen( fps , myheli.get_score());    
        if(fps.get_ticks()>300000)               
        {
            game_over=load_image("images/game_over.png");
            apply_surface(0,0,game_over,screen);
            SDL_Flip(screen);
            Mix_FreeMusic( music );
            quit=true;

        }
       
        if( SDL_Flip( screen ) == -1 )
        {
            return 1;
        }
      
        myheli.set_camera();

        apply_surface( 0, 0, background, screen, &camera );

        if( fps.get_ticks() < 1000 /FRAMES_PER_SECOND )
        {
            SDL_Delay( ( 1000 / FRAMES_PER_SECOND ) - fps.get_ticks() );
        }
    }

    return 0;
}


#endif
