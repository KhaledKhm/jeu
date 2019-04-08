#include <SDL/SDL_mixer.h>
#include <stdio.h>
#include "SDL/SDL.h"
#include "SDL/SDL_image.h"




int main(void){
	SDL_Surface *screen;
	SDL_Surface *image;
	SDL_Surface *masque;
   	SDL_Surface *perso;
	SDL_Event event;
	SDL_Rect positionecran;
	SDL_Rect posp;
	
	
	char pause;
	int collisionRightSide=0;
	
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
	masque = IMG_Load("backgroundMasque.png");
	
	positionecran.x = 0;
	positionecran.y = 0;
	positionecran.w = image->w;
	positionecran.h = image->h;
	perso = IMG_Load("saif.png");
	
	SDL_BlitSurface(image,NULL,screen,&positionecran);
	posp.x = 30;
        posp.y = 790;
	Uint32 colorkey = SDL_MapRGB(perso->format, 0xFF,0xFF,0xFF);
	SDL_SetColorKey(perso,SDL_SRCCOLORKEY,colorkey);
	int done = 1;
	SDL_EnableKeyRepeat(10, 10);
	while(done){
		SDL_BlitSurface(masque,NULL,screen,&positionecran);
		SDL_BlitSurface(image,NULL,screen,&positionecran);
		SDL_BlitSurface(perso,NULL,screen, &posp);
                SDL_Flip(screen);
		
		while(SDL_PollEvent(&event)){
			
			switch(event.type){
				case SDL_QUIT:
					done = 0;
					break;
			
           
				case SDL_MOUSEBUTTONUP:
            					posp.x = event.button.x; /* On change les coordonnées de seif */
            		                        posp.y = event.button.y;
					        if (event.button.button == SDL_BUTTON_RIGHT) /* On arrête le programme si on a fait un clic droit */
							done = 0;
            				break;
			 
				case SDL_KEYDOWN:	
				{
					switch(event.key.keysym.sym)
					{
						case SDLK_ESCAPE:
							done = 0;
							break;
						case SDLK_LEFT:
							posp.x -= 20;
							break;
						case SDLK_DOWN:
							posp.y += 20;
		 			SDL_BlitSurface(image,NULL,screen,&positionecran);
					posp.y=790;
		
							break;
		
						case SDLK_UP:
							posp.y -= 20;
			
							break;
						case SDLK_RIGHT:
							posp.x += 20;
					
				
							break;
					}
				}
			}
		}
	}
	SDL_FreeSurface(image);
	SDL_FreeSurface(perso);
	
	

	SDL_Quit();
	return 0;
}
