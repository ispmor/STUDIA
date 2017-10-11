#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LL 5


int main(int argc, char *argv[]){

	int n = argc > 1 ? atoi(argv[1]) : 10;

	double down_limit = argc > 2 ? atof(argv[2]) : 0.0;
	
	double upper_limit = argc > 3 ? atof(argv[3]) : 1.0;

	FILE *output = argc > 4 ? fopen(argv[4], "w") : stdout;

	if(output == NULL){
		fprintf(stderr, "%s: Nie mogę pisać do %s\n", argv[0], argv[4]);
		return 1;

	}
	srand(time(NULL));

	int pom=0;

	for (int i = 0; i < n; i++){
		double gen = (double)rand() / RAND_MAX;
		fprintf(output, "%g%c", down_limit + (upper_limit - down_limit)*gen, (i%LL== LL -1 ? '\n' : ' ')
				);
		pom = i;
	}
	if(pom%LL !=0) 
	fprintf(output,"\n");


	fclose(output);

	return 0;


}
