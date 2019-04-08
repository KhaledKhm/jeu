#include <stdio.h>
#include <stdlib.h> 
#include <SDL/SDL.h> 
#include <SDL/SDL_image.h> 
#include <SDL/SDL_ttf.h>
#include <SDL/SDL_mixer.h>
#include "perso.h"

int main()
{ 
 personnage joueur;
 Imm ecran,bg;
SDL_Event event;
 int done=0;

SDL_Init(SDL_INIT_EVERYTHING); 
  

init(&joueur,&ecran,&bg);
ecran.srf= SDL_SetVideoMode(1024, 1024, 32, SDL_HWSURFACE); 
load(&joueur,&bg);

while(!done)
{
 display(&joueur,&bg,&ecran);
 
}

SDL_FreeSurface(joueur.surface[0]);
SDL_FreeSurface(bg.srf);


SDL_Quit();
return 0;
}
