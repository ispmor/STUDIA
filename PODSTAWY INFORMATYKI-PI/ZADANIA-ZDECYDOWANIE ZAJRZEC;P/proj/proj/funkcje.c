#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lancuch.h"

void blad(char *tekst)
{
  fprintf(stderr,"%s\n",tekst);
  exit(1);
}

void wyswietl_opis()
{
  printf("Gramatyka bezkontekstowa G=(V,T,P,S)\n"
         "V={ S }\n"
         "T={ a,b }\n"
         "P={ S->aS|bSaS|[eps] }\n");
}

int analizuj_lancuch(char *lancuch)
{
  int dlugosc=strlen(lancuch);
  int uruchom=-1;
  int i;

  for(i=0;i<dlugosc;i++)
    if(lancuch[i]=='S')
    {
      uruchom=(rand()%3);
      switch (uruchom)
      {
        case 0:
          wklej(i,lancuch,"aS");
          i++;
          dlugosc++;
          break;
        case 1:
          wklej(i,lancuch,"bSaS");
          i+=3;
          dlugosc+=3;
          break;
        case 2:
          usun_znak(lancuch,i);
          i--;
          dlugosc--;
          break;
        default:
          break;
      }
    }

  return uruchom;
}

int porownaj_z_poprzednimi(char **lancuchy,int i)
{
  int j;

  for(j=0;j<i;j++)
    if(strcmp(lancuchy[i],lancuchy[j])==0)
      return 1;
  return 0;
}
