#ifndef INIT_H
#define INIT_H

#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>


const int SCREEN_WIDTH=640;  // Change la Largeur de l'ecran
const int SCREEN_HEIGHT=400; // Change la Hauteur de l'ecran
const int SCREEN_BPP=30;     // Change la profondeur des couleurs
const int TAILLE=10;          // Change la taille de la balle

struct Sprite
{
    int x;
    int y;
    SDL_Surface *source;
    SDL_Rect lecture;

};

#endif // INIT_H
