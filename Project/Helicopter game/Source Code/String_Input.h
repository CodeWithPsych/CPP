#ifndef STRING_INPUT_H_INCLUDED
#define STRING_INPUT_H_INCLUDED
#include <string>
#include <SDL.h>
#include "variables.h"
#include "constants.h"
class StringInput
{
    private:
        std::string str;
        SDL_Surface *text;
        SDL_Color textColor ;

    public:
        StringInput();
        ~StringInput();
        void handle_input();
        void show_text( void );
        std::string getString( void );


};

StringInput::StringInput()
{
    str = "";

    text = NULL;

    SDL_EnableUNICODE( SDL_ENABLE );
}

StringInput::~StringInput()
{
    SDL_FreeSurface( text );

    SDL_EnableUNICODE( SDL_DISABLE );
}

void StringInput::handle_input()
{
    if( event.type == SDL_KEYDOWN )
    {
        std::string temp = str;

        if( str.length() <= 16 )
        {
            if( event.key.keysym.unicode == (Uint16)' ' )
            {
                str += (char)event.key.keysym.unicode;
            }
            else if( ( event.key.keysym.unicode >= (Uint16)'0' ) && ( event.key.keysym.unicode <= (Uint16)'9' ) )
            {

                str += (char)event.key.keysym.unicode;
            }

            else if( ( event.key.keysym.unicode >= (Uint16)'A' ) && ( event.key.keysym.unicode <= (Uint16)'Z' ) )
            {
           
                str += (char)event.key.keysym.unicode;
            }

            else if( ( event.key.keysym.unicode >= (Uint16)'a' ) && ( event.key.keysym.unicode <= (Uint16)'z' ) )
            {
                str += (char)event.key.keysym.unicode;
            }
        }

        if( ( event.key.keysym.sym == SDLK_BACKSPACE ) && ( str.length() != 0 ) )
        {
            str.erase( str.length() - 1 );
        }

        if( str != temp )
        {

            SDL_FreeSurface( text );

            text = TTF_RenderText_Solid( font, str.c_str(), textColor );
        }
    }
}


void StringInput::show_text( void )
{
    if( text != NULL )
    {
        apply_surface( ( SCREEN_WIDTH - text->w ) / 2, ( SCREEN_HEIGHT - text->h ) / 2, text, screen );
    }
}

std::string StringInput :: getString( void )
{
     return str;
}



#endif
