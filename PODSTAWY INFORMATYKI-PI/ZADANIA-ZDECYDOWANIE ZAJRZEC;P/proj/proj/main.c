#include <stdio.h>
#include <stdlib.h>
#include "funkcje.h"
#include "strukt.h"

int main(int argc, char *argv[])
{
  lancuchy_t *lancuchy;

  if(argc<2)
    blad("Jako argument podaj liczbe lancuchow.");
  if(atoi(argv[1])<1 || atoi(argv[1])>255)
    blad("Liczba lancuchow powinna byc wieksza od 0 i mniejsza od 256.");

  if((lancuchy=rezerwuj_lancuchy( atoi(argv[1]) ))==NULL)
    blad("Nie udalo sie zarezerwowac pamieci.");

  stworz_lancuchy(lancuchy);

  sortuj(lancuchy);

  wyswietl_opis();

  wyswietl_lancuchy(*lancuchy);

  uwolnij_lancuchy(lancuchy);

  return 0;
}
