#ifndef HEADERNAME_H_INCLUDED
#define HEADERNAME_H_INCLUDED


typedef struct 
{
  SDL_Surface* surface[7];
  SDL_Rect position;
  int nbr_vie;

}personnage;
typedef struct 
{ 
  SDL_Surface* srf;
  SDL_Rect pos;
}Imm;

void init(personnage* joueur,Imm* ecran,Imm* bg);
void load(personnage* joueur, Imm* bg);
void display(personnage* joueur, Imm* bg,Imm* ecran);



#endif // HEADERNAME_H_INCLUDED0
