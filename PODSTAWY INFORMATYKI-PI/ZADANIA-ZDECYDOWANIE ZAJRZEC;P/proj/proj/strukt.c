#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include "strukt.h"
#include "funkcje.h"
#include "lancuch.h"

lancuchy_t *rezerwuj_lancuchy(int n)
{
  lancuchy_t *lancuchy;
  int i;

  if((lancuchy=malloc(sizeof *lancuchy))==NULL)
    return NULL;

  if((lancuchy->data=malloc(n*sizeof *lancuchy->data))==NULL){
    free(lancuchy);
    return NULL;
  }

  if((lancuchy->data[0]=malloc(n*(n*2+3)*sizeof *lancuchy->data[0]))==NULL){
    free(lancuchy->data);
    free(lancuchy);
    return NULL;
  }

  for(i=1;i<n;i++)
    lancuchy->data[i]=lancuchy->data[i-1]+n*2+3;

  for(i=0;i<n;i++)
    strcpy(lancuchy->data[i],"S");

  lancuchy->n=n;
  lancuchy->uwolnij=0;
  return lancuchy;
}

void wyswietl_lancuchy(lancuchy_t lancuchy)
{
  int i;

  printf("\n%d przykladowych lancuchow wyjsciowych tej gramatyki:\n",lancuchy.n);

  for(i=0;i<lancuchy.n;i++)
    if(lancuchy.data[i][0]=='\0')
      printf("\nLancuch pusty\n");
    else printf("\n%s\n",lancuchy.data[i]);
}

void uwolnij_lancuchy(lancuchy_t *lancuchy)
{
  free(lancuchy->data[lancuchy->uwolnij]);
  free(lancuchy->data);
  free(lancuchy);
}

void sortuj(lancuchy_t *lancuchy)
{
  int i;
  int sortowac=1;
  while(sortowac==1)
  {
    sortowac=0;
    for(i=0;i<lancuchy->n-1;i++)
      if(strlen(lancuchy->data[i])>strlen(lancuchy->data[i+1]) ||
         (strlen(lancuchy->data[i])==strlen(lancuchy->data[i+1]) &&
          strcmp(lancuchy->data[i],lancuchy->data[i+1])>0))
      {
        zamien(lancuchy->data,i,i+1);
        if(i==lancuchy->uwolnij)
          lancuchy->uwolnij=i+1;
        sortowac=1;
      }
  }
}

void stworz_lancuchy(lancuchy_t *lancuchy)
{
  int i;
  int zrobione;

  srand(time(0));

  for(i=0;i<lancuchy->n;i++)
  {
    if(lancuchy->n==1)
    {
      analizuj_lancuch(lancuchy->data[i]);
      usun_esy(lancuchy->data[i]);
    }

    zrobione=0;
    while(zrobione>-1)
    {
      if(strlen(lancuchy->data[i]) < lancuchy->n)
        zrobione=analizuj_lancuch(lancuchy->data[i]);
      else
      {
        usun_esy(lancuchy->data[i]);
        zrobione=-1;
      }

      if(porownaj_z_poprzednimi(lancuchy->data,i)==1)
      {
        strcpy(lancuchy->data[i],"S");
        zrobione=0;
      }
    }
  }
}
