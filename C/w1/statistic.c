#include <stdio.h>
#define BUFF_SIZE 6000
#define ALPH_SIZE 'Z'-'A'+1
int saferead(FILE * in, char tab[], int maxsize){
	 int i = 0;
 	while(i < maxsize && (tab[i] = fgetc(in)) != EOF)	 
		i++;
	return feof(in) ? i : -i;

}
void stats(char tab[], int size, int stat[]){
	for(int i=0; i<ALPH_SIZE;i++) stat[i]=0;
	for(int i = 0; i < size; i++){
		if(tab[i] >= 'A' && tab[i]<= 'Z') /*sprawdzenie czy wczytana
						    wartosc z tablicy jest literą */
			stat[tab[i] - 'A']++;
		else if(tab[i]>='a' && tab[i] <='z')
			stat[tab[i]-'a']++;		

	}
	

}

int main(int argc, char *argv[]){
	

	if(argc>1){
	FILE * input = fopen(argv[1], "r");
	if(input == NULL) {
		printf("Cannot read the file");
		return 2;
	}
	char signs[BUFF_SIZE];
	int stat[ALPH_SIZE];
	int charnumber = saferead(input, signs, BUFF_SIZE);
		if(charnumber > 0){
			printf("%d\n",charnumber);
			stats( signs, charnumber, stat);
			for(int i=0; i < ALPH_SIZE; i++){
				printf("%c --> %d\n", 'A'+i, stat[i]);
			}
		}
		else{ 
		    	printf("FILE HAS TOO MANY CHARACTERS, ABORTING THE MISSION");
	
		}
	}
	else
		printf("File name was not declared, pls enter the filename\n");


}
