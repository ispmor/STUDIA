#include <string.h>

void usun_znak(char *lancuch, int pozycja)
{
  int dlugosc=strlen(lancuch);
  int i;

  for(i=pozycja;i<dlugosc;i++)
    lancuch[i]=lancuch[i+1];
}

void wklej(int pozycja, char *lancuch, char *znaki)
{
  int dlugosc_z=strlen(znaki);
  int dlugosc_l=strlen(lancuch);
  int i;

  for(i=dlugosc_l+dlugosc_z-1;i>pozycja+1;i--)
    lancuch[i]=lancuch[i-dlugosc_z+1];

  for(i=0;i<dlugosc_z;i++)
    lancuch[i+pozycja]=znaki[i];
}

void zamien(char **lancuchy, int pierwszy, int drugi)
{
  char *tmp=lancuchy[pierwszy];
  lancuchy[pierwszy]=lancuchy[drugi];
  lancuchy[drugi]=tmp;
}

void usun_esy(char *lancuch)
{
  int dlugosc=strlen(lancuch);
  int i;
  for(i=0;i<dlugosc;i++)
    if(lancuch[i]=='S'){
      usun_znak(lancuch,i--);
      dlugosc--;
    }
}
