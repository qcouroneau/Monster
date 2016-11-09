#include <iostream>
#include <cstdlib>
#include <string>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#include <sstream>

#include "init.h"
#include "menu.h"
#include "fonctsdl.h"


SDL_Surface *load_image( std::string filename )
{
    SDL_Surface* loadedImage = NULL;

    SDL_Surface* optimizedImage = NULL;

    loadedImage = SDL_LoadBMP( filename.c_str() );

    if( loadedImage != NULL )
    {
        optimizedImage = SDL_DisplayFormat( loadedImage );

        SDL_FreeSurface( loadedImage );
    }
    return optimizedImage;
}

void applySurface(int x, int y, SDL_Surface* source,
             SDL_Surface* destination, SDL_Rect* clip)
{
    SDL_Rect offset;
    offset.x = x;
    offset.y = y;
    SDL_BlitSurface( source, clip, destination, &offset );
}

void
showMessageScreen(string message,int x,int y,
                  TTF_Font *font,int fontSize,SDL_Color textColor,SDL_Surface* &screen)
{
    string mot="";
    string space=" ";
    int i=0,j;
    SDL_Surface *mes=NULL;

    j = message.find(space);
    while( j != string::npos )
    {
        mot=message.substr(i,j-i);
        if(mot != "")
        {
            mes=TTF_RenderText_Solid(font,mot.c_str(),textColor);
            applySurface(x,y,mes,screen,NULL);
            x+=mes->w;
            SDL_FreeSurface(mes);
        }
        x+=fontSize;
        i=j+1;
        j = message.find(space,i);
    }

    mot=message.substr(i);
    mes=TTF_RenderText_Solid(font,mot.c_str(),textColor);
    applySurface(x,y,mes,screen,NULL);
    SDL_FreeSurface(mes);

}

SDL_Surface *loadImageWithColorKey(string filename, int r, int g, int b)
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
            Uint32 colorkey = SDL_MapRGB( optimizedImage->format, r, g, b );

            SDL_SetColorKey( optimizedImage, SDL_SRCCOLORKEY, colorkey );
        }
     }
    return optimizedImage;
}


void menuPlayVert(Sprite &s)
{
    s.x=150;
    s.y=300;

    //playvert
    s.lecture.x=0;
    s.lecture.y=100;
    s.lecture.w=150;
    s.lecture.h=60;
}

void menuPlayBleu(Sprite &s)
{
    s.x=150;
    s.y=300;

    //playbleu
    s.lecture.x=200;
    s.lecture.y=100;
    s.lecture.w=150;
    s.lecture.h=60;
}

void menuQuitVert(Sprite &s)
{
    s.x=325;
    s.y=300;

    //quitvert
    s.lecture.x=0;
    s.lecture.y=0;
    s.lecture.w=150;
    s.lecture.h=60;
}

void menuQuitBleu(Sprite &s)
{
    s.x=325;
    s.y=300;

    //quitbleu
    s.lecture.x=200;
    s.lecture.y=0;
    s.lecture.w=150;
    s.lecture.h=60;
}




// initialisation d'un sprite passé en référence  //

void initSpriteFont(Sprite &s)
{
    s.x=0;
    s.y=0;

    s.lecture.x=0;
    s.lecture.y=0;
    s.lecture.w=400;
    s.lecture.h=300;
}
