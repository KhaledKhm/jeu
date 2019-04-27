#ifndef HEADERNAME_H_INCLUDED
#define HEADERNAME_H_INCLUDED

//saif
typedef struct 
{
  SDL_Surface* surface[15];
  SDL_Rect position;
  int nbr_vie;
  int frames;
  Uint32 start;
  Uint32 end;
  Uint32 counter;
}personnage;
//saif
typedef struct 
{ 
  SDL_Surface* srf;
  SDL_Rect pos;
}Imm; 

/*----------------------------*/
//baha
typedef struct       //init malus
{
  float x, y;
  float dx, dy;
  int challenging,isDead;
  int animFrame;
} Malus;
typedef struct     //init mobs
{
  float x, y;
  float dx, dy;
int challenging,helping;
} Mobs;
 typedef struct
{
  float scrollX;
  Mobs Mobs[NUM_Mobs];
  SDL_Texture *mob;
  SDL_Texture *manFrames[2];
  SDL_Joystick *joystick;
  TTF_Font *font;
  int time, deathCountdown;
  int status State;
  SDL_Window *window;
} GameState;


//saif
void init(personnage* joueur,Imm* ecran,Imm* bg);
void load(personnage* joueur, Imm* bg);
int check_input(SDL_Event event, int* test,int done,Imm* ecran,personnage* joueur);
void display(personnage* joueur,Imm* ecran ,Imm * bg ,int *test );
//saif
void init(Imm* ecran,Imm* bg,Imm* box1,Imm*box2,Imm* entite,Imm* perso,Imm* play);
void load( Imm* bg,Imm* entite,Imm* perso,Imm* play );
void display( Imm* bg,Imm* ecran,Imm* entite,Imm* box1,Imm* perso,Imm* play , Imm* box2);
int Collision(Imm box1,Imm box2);
int check_input(SDL_Event event,int done ,Imm* ecran,Imm* box1,Imm* box2,Imm* entite,Imm* perso);


#endif // HEADERNAME_H_INCLUDED0
