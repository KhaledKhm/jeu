#include <stdio.h>
#include <stdlib.h> 
#include <SDL/SDL.h> 
#include <SDL/SDL_image.h> 
#include <SDL/SDL_ttf.h>
#include <SDL/SDL_mixer.h>
#include "coll.h"


void init(Imm* ecran,Imm* bg,Imm* box1,Imm* box2,Imm* entite,Imm* perso,Imm* play)
{  
         ecran->srf=NULL;
         bg->srf=NULL;
          entite->srf=NULL;
         play->srf=NULL;

        box1->pos.x = 10;
        box1->pos.y = 10;
        box1->pos.w = 33;
        box1->pos.h = 140;
       
        box2->pos.x = 10;
        box2->pos.y = 20;
        box2->pos.w = 80;
        box2->pos.h = 34;

        bg->pos.x=0;
        bg->pos.y=0;


	play->pos.x=0;
	play->pos.y=0;

	entite->pos.x=200;
	entite->pos.y=420;

       perso->pos.x=0;
       perso->pos.y=340;



}
void load( Imm* bg,Imm* entite,Imm* perso,Imm* play)
{
 bg->srf=IMG_Load("GameBG_Prototype1.png");
 entite->srf=IMG_Load("ennemi.png");
 perso->srf=IMG_Load("1.png");
 play->srf=IMG_Load("play_h.png");
 }
void display( Imm* bg,Imm* ecran,Imm* entite,Imm* box1,Imm* perso,Imm* play,Imm* box2)
{
   SDL_BlitSurface(bg->srf,NULL,ecran->srf,&bg->pos);
   SDL_BlitSurface(entite->srf,NULL,ecran->srf,&entite->pos);
   SDL_BlitSurface(perso->srf,NULL,ecran->srf,&perso->pos);
   if(Collision(*box1,*box2)){ 

  SDL_BlitSurface(play->srf,NULL,ecran->srf,&play->pos);}
}

int Collision(Imm box1,Imm box2)
{
   if((box2.pos.x >= box1.pos.x + box1.pos.w)|| (box2.pos.x + box2.pos.w <= box1.pos.x) || (box2.pos.y >= box1.pos.y + box1.pos.h) || (box2.pos.y + box2.pos.h <= box1.pos.y))
          return 0;
   else
          return 1;
}

int check_input(SDL_Event event,int done ,Imm* ecran,Imm* box1,Imm* box2,Imm* entite,Imm* perso)
{
const int vitesse= 10;
 
  box2->pos.x=entite->pos.x;
  box2->pos.y=entite->pos.y;
 
  box1->pos.x=perso->pos.x;
  box1->pos.y=perso->pos.y;

 
   Uint32 color2 = SDL_MapRGB(ecran->srf->format, 0xFF,0xFF,0xFF);
   Uint32 color = SDL_MapRGB(ecran->srf->format, 0xFF,0xFF,0xFF);
    while(SDL_PollEvent(&event)) {
                        switch(event.type) {
                                case SDL_QUIT:
                                        done= 1;
                                        break;
                                case SDL_KEYDOWN:
                                        switch(event.key.keysym.sym) {
                                                     case SDLK_ESCAPE:
                                                          done= 1;
                                                            break;
                                                                      case SDLK_UP:

                                                                          perso->pos.y-=vitesse;
                                                                       
                                                                      break;

                                                                      case SDLK_LEFT:
                                                                         
                                                                               perso->pos.x-=vitesse;
                                                                      
                                                                       break;

                                                                    case SDLK_DOWN:

                                                                                 perso->pos.y+=vitesse;
                                                                            
                                                                    break;

                                                                    case SDLK_RIGHT:
                                                                           
                                                                                perso->pos.x+=vitesse;
                                                                              
                                                                    break;


									case SDLK_z:
                                                              
                                                                         entite->pos.y-=vitesse;
                                                                          
                                                                      break;

                                                                      case SDLK_q:

                                                                               entite->pos.x-=vitesse;

                                                                       break;

                                                                    case SDLK_s:

                                                                               entite->pos.y+=vitesse;
                                                                               
                                                                    break;

                                                                    case SDLK_d:

                                                                              entite->pos.x+=vitesse;


                                                                    break;
                                                                     

                                                                     } break;

                                      }
                                      
                                                     SDL_Flip(ecran->srf);

                                 }

                                              
      return done;

  }


       

