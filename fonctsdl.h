#ifndef FONCTSDL_H
#define FONCTSDL_H
#include "init.h"
#include <string>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
using namespace std;


SDL_Surface *load_image( std::string filename);
SDL_Surface *loadImageWithColorKey(string filename, int r, int g, int b);

void applySurface(int x, int y, SDL_Surface* source, SDL_Surface* destination, SDL_Rect* clip);
void showMessageScreen(string message,int x,int y, TTF_Font *font,int fontSize,SDL_Color textColor,SDL_Surface* &screen);
void menuPlayVert(Sprite &s);
void menuPlayBleu(Sprite &s);
void menuQuitVert(Sprite &s);
void menuQuitBleu(Sprite &s);
void initSpriteFont(Sprite &s);



#endif // FONCTSDL_H
