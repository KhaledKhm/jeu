#ifndef HEADERNAME_H_INCLUDED
#define HEADERNAME_H_INCLUDED


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
typedef struct 
{ 
  SDL_Surface* srf;
  SDL_Rect pos;
}Imm; 
void init(personnage* joueur,Imm* ecran,Imm* bg);
void load(personnage* joueur, Imm* bg);
int check_input(SDL_Event event, int* test,int done,Imm* ecran,personnage* joueur);
void display(personnage* joueur,Imm* ecran ,Imm * bg ,int *test );

#endif // HEADERNAME_H_INCLUDED0
