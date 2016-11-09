#include <iostream>
#include <cstdlib>
#include <string>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#include <sstream>
#include "fonctsdl.h"
#include "init.h"

//  Fonction Menu  //

void menu(SDL_Surface *screen,bool &quit,bool &choixplayer)
{
    SDL_Event event;
    Sprite fond;

    initSpriteFont(fond);

    fond.source=loadImageWithColorKey("menu.bmp",0,0,0);

    applySurface(0,0,fond.source,screen,NULL);

    SDL_Flip(screen);

    SDL_FreeSurface(fond.source);
}
