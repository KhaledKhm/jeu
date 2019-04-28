#ifndef FONCTION_H_
#define FONCTION_H_
#include<stdio.h>
#include<stdlib.h>
#include<SDL/SDL.h>
#include <SDL/SDL_image.h>



typedef struct  {
SDL_Surface *screen,*image;
SDL_Event event ;
SDL_Rect rect ;
int running;
int frame;
SDL_Rect rects[6];
}acteur;
void moving_right(SDL_Rect *positionmilieu,SDL_Rect *positionFond,SDL_Surface *imageDeFond,SDL_Surface * ecran,SDL_Surface *imageDePerso);
void moving_left(SDL_Rect *positionmilieu,SDL_Rect *positionFond,SDL_Surface *imageDeFond , SDL_Surface *ecran,SDL_Surface *imageDePerso);
void gravity(SDL_Rect *positionmilieu,SDL_Rect *positionFond,SDL_Surface *imageDeFond , SDL_Surface *ecran,SDL_Surface *imageDePerso);
void mousemov(SDL_Rect *positionmilieu,SDL_Rect *positionFond,SDL_Surface *imageDeFond , SDL_Surface *ecran,SDL_Surface *imageDePerso);
void jump(SDL_Rect *positionmilieu,SDL_Rect *positionFond,SDL_Surface *imageDeFond , SDL_Surface *ecran,SDL_Surface *imageDePerso);
void setrects_right(SDL_Rect clip[]);
void setrects_left(SDL_Rect clip[]);
void animation(acteur *acteur);
#endif
