#ifndef HEADERNAME_H_INCLUDED
#define HEADERNAME_H_INCLUDED
typedef struct
{
SDL_Surface *srf;
SDL_Rect pos;

}Imm;

void init(Imm* ecran,Imm* bg,Imm* box1,Imm*box2,Imm* entite,Imm* perso,Imm* play);
void load( Imm* bg,Imm* entite,Imm* perso,Imm* play );
void display( Imm* bg,Imm* ecran,Imm* entite,Imm* box1,Imm* perso,Imm* play , Imm* box2);
int Collision(Imm box1,Imm box2);
int check_input(SDL_Event event,int done ,Imm* ecran,Imm* box1,Imm* box2,Imm* entite,Imm* perso);

#endif // HEADERNAME_H_INCLUDED0
