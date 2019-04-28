#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include "menu.c"
//#include "jeu.h"




int main()
{  SDL_Surface *screen;

if(SDL_Init(SDL_INIT_VIDEO) != 0){
		printf("Unable to initialize SDL: %s\n", SDL_GetError());
		return -1;
	}
	screen = SDL_SetVideoMode(1024, 1024, 32, SDL_HWSURFACE | SDL_DOUBLEBUF);
	if(screen == NULL){
		printf("Unable to set video mode: %s\n", SDL_GetError());
		return -1;
	}
	/*//Music
	if(Mix_OpenAudio(44100,MIX_DEFAULT_FORMAT,MIX_DEFAULT_CHANNELS,1024)==-1){
		printf("%s",Mix_GetError());
	}
	Mix_Music *music;
	Mix_Music *sound; 
	music=Mix_LoadMUS("Dark.mp3");
	Mix_PlayMusic(music,-1);*/
 	menu(screen);


 
    return 0;
}
