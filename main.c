#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
//#include "animationsaif.c"
//#include "animation.c"
/*#include "enigme.c"
 */
//#include "dep.c"
#include "menu.c"
//#include "objets.c"
//#include "scrolling.c"


int main()
 
{ menu();

  /*  int x,y,buttontest=0 ;
    TTF_Init();
    SDL_Surface *Menu ;
    SDL_Surface *ecran ;
    SDL_Surface *message ;
    SDL_Surface *Start ;
    //SDL_Surface *Continue1 = NULL;
    SDL_Surface *Option ;
    //SDL_Surface *Newgame1 = NULL;
    SDL_Surface *Credit  ;
    SDL_Surface *Quit  ;
    SDL_WM_SetCaption("SDL_Mixer", NULL);
    SDL_WM_SetCaption("Gestion des évènements en SDL", NULL);
    SDL_Event event;
    SDL_Rect positionMenu, positionStart, positionOption, positionCredit, positionQuit ;
    positionMenu.x=0;
    positionMenu.y=0;
    positionStart.x=50;
    positionStart.y=0;
    positionOption.x=50;
    positionOption.y=5;
    positionCredit.x=50;
    positionCredit.y=10;
    positionQuit.x=50;
    positionQuit.y=15;
    char* text="Your worst nightmares have come to reality";
    TTF_Font* font=NULL;
    SDL_Color textColor = {255,0,0};



 /*if(SDL_Init(SDL_INIT_VIDEO) != 0){
		printf("Unable to initialize SDL: %s\n", SDL_GetError());
		return -1;
	}
	ecran = SDL_SetVideoMode(1300, 1024, 32, SDL_HWSURFACE | SDL_DOUBLEBUF);
	if(ecran == NULL){
		printf("Unable to set video mode: %s\n", SDL_GetError());
		return -1;
	}
	//Music
	if(Mix_OpenAudio(44100,MIX_DEFAULT_FORMAT,MIX_DEFAULT_CHANNELS,1024)==-1){
		printf("%s",Mix_GetError());
	}
	Mix_Music *music;
	Mix_Music *sound; 
	music=Mix_LoadMUS("Dark.mp3");
	Mix_PlayMusic(music,-1);
	
    
    
    Menu = SDL_LoadBMP("BackMenu.bmp");

    SDL_BlitSurface(Menu,NULL,ecran,&positionMenu);
	if(Menu == NULL){
		printf("Unable to load bitmap: %s\n", SDL_GetError());
		return -1;
	}
  

    Start = IMG_Load("StartNo.png");    
    Option = IMG_Load("OptionNo.png");    
    Credit = IMG_Load("CreditsNo.png");
    Quit = IMG_Load("QuitNo.png");
   
    SDL_BlitSurface(Start,NULL,ecran,&positionStart);
    SDL_BlitSurface(Option,NULL,ecran,&positionOption);
    SDL_BlitSurface(Credit,NULL,ecran,&positionCredit);
    SDL_BlitSurface(Quit,NULL,ecran,&positionQuit);
    font=TTF_OpenFont("arial.ttf",28);
    message=TTF_RenderText_Solid(font,text,textColor);
    SDL_Rect posText;
    posText.x=400;
    posText.y=100;
    SDL_BlitSurface(message,NULL,ecran,&posText);
    SDL_Flip(ecran);
 
	

  
    //KEYBOARD EVENT


	
SDL_FreeSurface(Menu);


  int gameover = 0;

  // message pump 
  while (!gameover){
	 if (SDL_PollEvent(&event)) {
      // an event was found 
      switch (event.type) {
        // close button clicked 
        case SDL_QUIT:
          gameover = 1;
          break;
		}
	}
	
 }

  

    //MOUSE EVENT
 

//}
    //SDL_FreeSurface(text);
  //  TTF_CloseFont(font);
//    TTF_Quit();
    SDL_FreeSurface(Menu);
    SDL_FreeSurface(Start);
    SDL_FreeSurface(Option);
    SDL_FreeSurface(Credit);
    SDL_FreeSurface(Quit);
    Mix_FreeMusic(music); //Libération de la musique
    Mix_FreeMusic(sound);
    Mix_CloseAudio(); //Fermeture de l'API
    SDL_Quit();
    return 0;*/
}
