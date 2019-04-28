#include<stdio.h>
#include<stdlib.h>
#include<SDL/SDL.h>
#include <SDL/SDL_image.h>

#include "grav.h"

void moving_right(SDL_Rect *positionmilieu,SDL_Rect *positionFond,SDL_Surface *imageDeFond , SDL_Surface *ecran,SDL_Surface *imageDePerso){
 if  (positionmilieu->x>=516 && positionFond->x<=1180)
            positionFond->x += 5;
        else if (positionmilieu->x<=750) 
            positionmilieu->x +=10;
            SDL_BlitSurface(imageDeFond,positionFond, ecran, NULL);
            SDL_BlitSurface(imageDePerso,NULL, ecran, positionmilieu);
    SDL_Flip(ecran); 
}
void moving_left(SDL_Rect *positionmilieu,SDL_Rect *positionFond,SDL_Surface *imageDeFond , SDL_Surface *ecran,SDL_Surface *imageDePerso){
if (positionmilieu->x<=258 && positionFond->x>=10)
            positionFond->x -= 5;
      else if (positionmilieu->x>=0)
      positionmilieu->x -= 10;
SDL_BlitSurface(imageDeFond,positionFond, ecran, NULL);
      SDL_BlitSurface(imageDePerso,NULL, ecran, positionmilieu);
               SDL_Flip(ecran);
}
void jump(SDL_Rect *positionmilieu,SDL_Rect *positionFond,SDL_Surface *imageDeFond , SDL_Surface *ecran,SDL_Surface *imageDePerso){
for(int i=0;i<25;i++){
positionmilieu->y-=4;
            
SDL_BlitSurface(imageDeFond,positionFond, ecran, NULL);
      SDL_BlitSurface(imageDePerso,NULL, ecran, positionmilieu);
    SDL_Flip(ecran);
}}
void gravity(SDL_Rect *positionmilieu,SDL_Rect *positionFond,SDL_Surface *imageDeFond , SDL_Surface *ecran,SDL_Surface *imageDePerso){
 while(positionmilieu->y<790){
positionmilieu->y+=2;
SDL_BlitSurface(imageDeFond,positionFond, ecran, NULL);
      SDL_BlitSurface(imageDePerso,NULL, ecran,positionmilieu);     
    SDL_Flip(ecran);
}}
void mousemov(SDL_Rect *positionmilieu,SDL_Rect *positionFond,SDL_Surface *imageDeFond , SDL_Surface *ecran,SDL_Surface *imageDePerso){
int mousex=0,mousey=0;
SDL_GetMouseState(&mousex,&mousey);
if(mousex>positionmilieu->x){
if  (positionmilieu->x>=516 && positionFond->x<=1180)
        
            positionFond->x += 5;
        else if (positionmilieu->x<=750) 
            positionmilieu->x +=10;
            SDL_BlitSurface(imageDeFond,positionFond, ecran, NULL);
                SDL_BlitSurface(imageDePerso,NULL, ecran, positionmilieu);
    SDL_Flip(ecran);
}else{
if (positionmilieu->x<=258 && positionFond->x>=10)
        
            positionFond->x -= 5; 
      else if (positionmilieu->x>=0)
      positionmilieu->x -= 10;
SDL_BlitSurface(imageDeFond,positionFond, ecran, NULL);
      SDL_BlitSurface(imageDePerso,NULL, ecran, positionmilieu);
                
    SDL_Flip(ecran);
    }
}
