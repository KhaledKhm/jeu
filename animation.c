

#include <stdio.h>
#include <stdlib.h> 
#include <SDL/SDL.h> 
#include <SDL/SDL_image.h> 
#include <SDL/SDL_ttf.h>
#include <SDL/SDL_mixer.h>
#include "animation.h"
void init(personnage* joueur,Imm* ecran,Imm* bg)
{

ecran->srf=NULL;
   joueur->surface[0]=NULL;
   bg->srf=NULL;

   bg->pos.x=0;
   bg->pos.y=0;

   joueur->position.x=0;
   joueur->position.y=340;
	joueur->frames=0;

   joueur->nbr_vie=5;
}

void load(personnage* joueur, Imm* bg)
{
 bg->srf=IMG_Load("Unmasked lvl1.png");
 joueur->surface[0]=IMG_Load("1.png");

joueur->surface[1] = IMG_Load("spriteDroite 2/1.png");
joueur->surface[2] = IMG_Load("spriteDroite 2/2.png");
joueur->surface[3] = IMG_Load("spriteDroite 2/3.png");
joueur->surface[4] = IMG_Load("spriteDroite 2/4.png");
joueur->surface[5] = IMG_Load("spriteDroite 2/5.png");
joueur->surface[6] = IMG_Load("spriteDroite 2/6.png");
joueur->surface[7] = IMG_Load("spriteDroite 2/7.png");

joueur->surface[8] = IMG_Load("spriteDroite 2/SPRITE GAUSHE/8.png");
joueur->surface[9] = IMG_Load("spriteDroite 2/SPRITE GAUSHE/9.png");
joueur->surface[10] = IMG_Load("spriteDroite 2/SPRITE GAUSHE/10.png");
joueur->surface[11] = IMG_Load("spriteDroite 2/SPRITE GAUSHE/11.png");
joueur->surface[12] = IMG_Load("spriteDroite 2/SPRITE GAUSHE/12.png");
joueur->surface[13] = IMG_Load("spriteDroite 2/SPRITE GAUSHE/13.png");
joueur->surface[14] = IMG_Load("spriteDroite 2/SPRITE GAUSHE/14.png");



}
int check_input(SDL_Event event, int* test,int done,Imm* ecran,personnage* joueur)
{ int i=0;
while( SDL_PollEvent( &event )){
		switch( event.type ){
                    case SDL_QUIT:
		      done=1;
			break;
			case SDL_KEYUP:
				switch( event.key.keysym.sym ){
					case SDLK_SPACE:
					joueur->position.x+=50;
					joueur->position.y+=50;
					break;
                                        
					case SDLK_d:
					(*test)=0;
                                        case SDLK_q:
					(*test)=0;
					}
                                            break;

		    case SDL_MOUSEBUTTONUP:

			        if (event.button.button == SDL_BUTTON_RIGHT){
            			joueur->position.x = event.button.x;
           		        joueur->position.y = event.button.y;
           		        break;

				}else if(event.button.button == SDL_BUTTON_LEFT){
				joueur->position.x+=8;
				joueur->position.y-=20;
				}

			case SDL_KEYDOWN:
				switch( event.key.keysym.sym ){
					case SDLK_ESCAPE:
						done=1;
						break;

                                        

					case SDLK_d:
                                              
						joueur->position.x+=30;
                                                 (*test)=1;
                                            if (joueur->position.x>580)
                                           joueur->position.x=580;

						break;
					case SDLK_q:
						joueur->position.x-=30;
						(*test)=2;
                                       if(joueur->position.x<0)
                                               joueur->position.x=0;
                                              
						break;
					case SDLK_e:
						(*test)=3;
                                               //joueur->position.x-=20;
                                                //joueur->position.y-=20;
						break;
		
					case SDLK_SPACE:
						joueur->position.x+=50;
						joueur->position.y-=50;
						break;		
				}
					break;
		}
	}
	return done;
}


void display(personnage* joueur,Imm* ecran ,Imm* bg ,int *test )
{
   SDL_BlitSurface(bg->srf,NULL,ecran->srf,&bg->pos);
  SDL_BlitSurface(joueur->surface[0],NULL,ecran->srf,&joueur->position);
  
  if(*test == 1){
         
        SDL_BlitSurface(bg->srf,NULL,ecran->srf,&bg->pos);
            SDL_BlitSurface(joueur->surface[joueur->frames],NULL,ecran->srf,&joueur->position);
if(joueur->frames > 7)		
joueur->frames=0;
	}

else if(*test == 2){
 /*if(joueur->frames< 8)
     joueur->frames=8;*/

     SDL_BlitSurface(bg->srf,NULL,ecran->srf,&bg->pos);
     SDL_BlitSurface(joueur->surface[joueur->frames],NULL,ecran->srf,&joueur->position);
/*if(joueur->frames>14)
joueur->frames=8;*/
    
} 

SDL_Flip(ecran->srf);

}

 



