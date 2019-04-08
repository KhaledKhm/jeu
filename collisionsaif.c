
#include <stdio.h>
#include <stdlib.h> 
#include <SDL/SDL.h> 
#include <SDL/SDL_image.h> 
#include <SDL/SDL_ttf.h>
#include <SDL/SDL_mixer.h>
#include "coll.h"



int main()
{
       Imm ecran,bg,box1,box2,entite,perso,play;
       SDL_Event event;
        SDL_Init(SDL_INIT_EVERYTHING);
         int done= 0;

          
       init(&ecran,&bg,&box1,&box2,&entite,&perso,&play);
       ecran.srf = SDL_SetVideoMode(640,480, 32, SDL_SWSURFACE); 
       load(&bg,&entite,&perso,&play);

         SDL_EnableKeyRepeat(10,10);

  while(!done)
{
   display(&bg,&ecran,&entite,&box1,&perso,&play,&box2);
 done=check_input(event,done,&ecran,&box1,&box2,&entite,&perso);
}
 SDL_FreeSurface(play.srf);
 SDL_FreeSurface(bg.srf);
 SDL_FreeSurface(entite.srf);
SDL_Quit();
return 0;
}
  

  
