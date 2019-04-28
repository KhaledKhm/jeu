#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>

#include "grav.h"
int main()
{
SDL_Surface * ecran=NULL, *imageDeFond=NULL,*imageDePerso=NULL;
int x=0,i;

int mousex,mousey;
    SDL_Rect positionFond ,positionmilieu;
    positionFond.x = 0;
    positionFond.y = 0;
    positionFond.h =1000;
    positionFond.w =800;
    positionmilieu.x = 30;
    positionmilieu.y = 790;
     SDL_Init(SDL_INIT_VIDEO);

    ecran = SDL_SetVideoMode(1024,1024, 32, SDL_HWSURFACE|SDL_DOUBLEBUF);
    SDL_WM_SetCaption("SCROLLING", NULL);
    imageDeFond = IMG_Load("background.png");
    imageDePerso = IMG_Load("saif.png");
    
	
  SDL_BlitSurface(imageDeFond,&positionFond, ecran, NULL);
  SDL_BlitSurface(imageDePerso,NULL, ecran, &positionmilieu);
  SDL_Flip(ecran);
  
 if(Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, MIX_DEFAULT_CHANNELS, 1024) == -1)
    {
        printf("%s",Mix_GetError());
    }
    Mix_Music *musique;
    Mix_AllocateChannels(20);
    musique = Mix_LoadMUS("musique.mp3");
    Mix_PlayMusic(musique, -1);
    Mix_VolumeMusic(MIX_MAX_VOLUME / 1);

   
    int continuer = 1;
    SDL_Event event;
    SDL_EnableKeyRepeat(10, 10);
 
    while (continuer)
    {

        SDL_WaitEvent(&event);
        switch(event.type)
        {
            case SDL_QUIT: 
                continuer = 0;
                break;
 case SDL_MOUSEBUTTONUP:
             if(event.button.button==SDL_BUTTON_LEFT)
              {mousemov(&positionmilieu,&positionFond,imageDeFond,ecran,imageDePerso);}            
case SDL_KEYDOWN: 
        switch(event.key.keysym.sym)
        {
            case SDLK_RIGHT: 
      moving_right(&positionmilieu,&positionFond,imageDeFond,ecran,imageDePerso);
                break;
            case SDLK_LEFT:
            	moving_left(&positionmilieu,&positionFond,imageDeFond,ecran,imageDePerso);
                break;
case SDLK_UP:
jump(&positionmilieu,&positionFond,imageDeFond,ecran,imageDePerso);
                break;
        }
        break;    
        }
gravity(&positionmilieu,&positionFond,imageDeFond,ecran,imageDePerso);     
   }
   SDL_FreeSurface(imageDeFond); 
   SDL_Quit();
    return EXIT_SUCCESS;
}
