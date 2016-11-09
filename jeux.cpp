#include "jeux.h"

void jeux(bool &restart)
{
    bool quit=false;
    bool choixplayer=false;
    TTF_Init();
    TTF_Font *fonts;
    SDL_Color textColor= {255,0,0};
    int fontSize=60;

    string police="Hawaii_Killer.ttf";
    fonts = TTF_OpenFont(police.c_str(),fontSize);

    SDL_Surface *screen;
    SDL_Surface *fd;
    SDL_Event event;

    SDL_Init(SDL_INIT_EVERYTHING);
    screen=SDL_SetVideoMode(SCREEN_WIDTH,SCREEN_HEIGHT,
                            SCREEN_BPP,SDL_SWSURFACE);

    menu(screen,quit,choixplayer);

}
