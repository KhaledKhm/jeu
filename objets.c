#include <SDL/SDL_mixer.h>
#include <stdio.h>
#include "SDL/SDL.h"
#include "SDL/SDL_image.h"



int main(void){
	SDL_Surface *screen;
	//SDL_Surface *image;
	SDL_Surface *Lune;
	SDL_Surface *Arbre;
	SDL_Surface *Obstacle1;
	SDL_Surface *Herbe;
	SDL_Surface *Batiment;
	SDL_Event event;
	SDL_Rect positionecran;
	SDL_Rect poslune;
	SDL_Rect posarbre;
	SDL_Rect posobstacle1;
	SDL_Rect posherbe;
	SDL_Rect posbatiment;
	//char pause;
	if(SDL_Init(SDL_INIT_VIDEO) != 0){
		printf("Unable to initialize SDL: %s\n", SDL_GetError());
		return -1;
	}
	screen = SDL_SetVideoMode(1024, 1024, 32, SDL_HWSURFACE | SDL_DOUBLEBUF);
	if(screen == NULL){
		printf("Unable to set video mode: %s\n", SDL_GetError());
		return -1;
	}
	/*image = IMG_Load("Background.png");
	if(image == NULL){
		printf("Unable to load bitmap: %s\n", SDL_GetError());
		return 1;
	}
	*/
	
	
	positionecran.x = 0;
	positionecran.y = 0;
	//positionecran.w = image->w;
//	positionecran.h = image->h;
	poslune.x=30;
	poslune.y=70;
	Lune = IMG_Load("Lune.png");
	posarbre.x=70;
	posarbre.y=600;
	Arbre = IMG_Load("Arbre.png");
	posobstacle1.x = 500;
	posobstacle1.y = 650;
	Obstacle1 = IMG_Load("Obstacle1.png");
	posherbe.x = 70;
	posherbe.y = 684;
	Herbe = IMG_Load("Herbes.png");
	posbatiment.x=1000;
	posbatiment.y=600;
	Batiment = IMG_Load("Batiment.png");
	int gameover = 1;
	while(gameover){
		//SDL_BlitSurface(image,NULL,screen,&positionecran);
		SDL_BlitSurface(Arbre,NULL,screen,&posarbre);
		SDL_BlitSurface(Herbe,NULL,screen,&posherbe);
		SDL_BlitSurface(Batiment,NULL,screen, &posbatiment);
		SDL_BlitSurface(Lune,NULL,screen,&poslune);
		SDL_BlitSurface(Obstacle1,NULL,screen,&posobstacle1);
                SDL_Flip(screen);
		while(SDL_PollEvent(&event)){
			switch(event.type){
				case SDL_QUIT:
					gameover = 0;
					break;

			}
		}
	}
//	SDL_FreeSurface(image);
	SDL_FreeSurface(Lune);
	SDL_FreeSurface(Arbre);
	SDL_FreeSurface(Obstacle1);
	SDL_FreeSurface(Herbe);
	SDL_FreeSurface(Batiment);
	

	//pause = getchar();	
	return 0;
}
