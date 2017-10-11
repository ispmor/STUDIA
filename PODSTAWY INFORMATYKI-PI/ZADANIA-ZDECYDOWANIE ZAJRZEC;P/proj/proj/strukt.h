typedef struct{
  char **data;
  int n;
  int uwolnij;
  }lancuchy_t;

lancuchy_t *rezerwuj_lancuchy(int n);

void wyswietl_lancuchy(lancuchy_t lancuchy);

void uwolnij_lancuchy(lancuchy_t *lancuchy);

void sortuj(lancuchy_t *lancuchy);

void stworz_lancuchy(lancuchy_t *lancuchy);
