#include <SDL/SDL_mixer.h>
#include <stdio.h>
#include "SDL/SDL.h"
#include "SDL/SDL_image.h"
int main(void){
	SDL_Surface *screen;
	SDL_Surface *image;
	SDL_Event event;
	SDL_Rect positionecran;
	char pause;
	if(SDL_Init(SDL_INIT_VIDEO) != 0){
		printf("Unable to initialize SDL: %s\n", SDL_GetError());
		return -1;
	}
	screen = SDL_SetVideoMode(8000, 1024, 32, SDL_HWSURFACE | SDL_DOUBLEBUF);
	if(screen == NULL){
		printf("Unable to set video mode: %s\n", SDL_GetError());
		return -1;
	}
	image = IMG_Load("background.png");
	if(image == NULL){
		printf("Unable to load bitmap: %s\n", SDL_GetError());
		return 1;
	}
	positionecran.x = 0;
	positionecran.y = 0;
	positionecran.w = image->w;
	positionecran.h = image->h;	
	
	int done = 1;
	while(done){
		SDL_BlitSurface(image,NULL,screen,&positionecran);
                SDL_Flip(screen);
	while(SDL_PollEvent(&event)){
			//check for messages
			switch(event.type){
				case SDL_QUIT:
					done = 0;
					break;
		case SDL_KEYDOWN:	
				{
					switch(event.key.keysym.sym)
					{
				case SDLK_ESCAPE:
					done = 0;
					break;
	}
	}	
	}
	}	
	}

	SDL_FreeSurface(image);
	
	SDL_Quit();	
	return 0;
	}
