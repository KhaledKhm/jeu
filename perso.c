#include <stdio.h>
#include <stdlib.h> 
#include <SDL/SDL.h> 
#include <SDL/SDL_image.h> 
#include <SDL/SDL_ttf.h>
#include <SDL/SDL_mixer.h>
#include "perso.h" 

void init(personnage* joueur,Imm* ecran,Imm* bg)
{  
   ecran->srf=NULL;
   joueur->surface[0]=NULL;
   bg->srf=NULL;

   bg->pos.x=0;
   bg->pos.y=0;

   joueur->position.x=0;
   joueur->position.y=340;
   joueur->nbr_vie=5;
}

void load(personnage* joueur, Imm* bg)
{
 bg->srf=IMG_Load("Background.png");
 joueur->surface[0]=IMG_Load("saif.png");

}




void display(personnage* joueur, Imm* bg,Imm* ecran)
{ 
   SDL_BlitSurface(bg->srf,NULL,ecran->srf,&bg->pos);
   SDL_BlitSurface(joueur->surface[0],NULL,ecran->srf,&joueur->position);
 
 SDL_Flip(ecran->srf);
}



   
  






























/*void initialiser_load(personnage* ecran,personnage* imagedefond)
{ 
  SDL_WM_SetCaption( "..LOCKED..", NULL );

  ecran->srf=NULL;
  imagedefond->srf=NULL;

  imagedefond->position.x=0;
  imagedefond->position.y=0;

imagedefond->srf=IMG_Load("Scenery_England_Rivers_Fields_Howtown_522657_640x480.jpg");
SDL_BlitSurface(imagedefond->srf, NULL, ecran->srf, &imagedefond->position);
   SDL_Flip(ecran->srf);

}  

/*void afficher(personnage* ecran,personnage* imagedefond)
{  SDL_BlitSurface(imagedefond->srf, NULL, ecran->srf, &imagedefond->position);
   SDL_Flip(ecran->srf);
}

void initialiser_personnage(personnage* joueur)
{
   joueur->position.x = 20;
    joueur->position.y = 20;
    joueur->nbr_vie=5;
    joueur->sprite[0]=IMG_Load("GameRessources/detective.png");
  joueur->sprite[1]=IMG_Load("GameRessources/perso_gauche.png");
  joueur->sprite[2]=IMG_Load("GameRessources/perso_haut.png");
 /*Uint32 colorKey=SDL_MapRGB((joueur->sprite)->format, 0xFF,0xFF,0xFF);
SDL_SetColorKey(joueur->sprite,SDL_SRCCOLORKEY,colorKey);
}

void afficher_personnage(personnage* joueur,personnage* ecran)
{
  switch(joueur->direction)
   { 
     case 0:
       SDL_BlitSurface(joueur->sprite[0], NULL, ecran->srf, &joueur->position);
      break;
      case 1:
       SDL_BlitSurface(joueur->sprite[1], NULL, ecran->srf, &joueur->position);
      break;
     case 2:
       SDL_BlitSurface(joueur->sprite[2], NULL, ecran->srf, &joueur->position);
      break;
   }
}

*/





