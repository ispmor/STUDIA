#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	
	int i;
	double sum = 0.0;
	
	for( i = 1; i < argc; i++){
		sum += atof( argv[i]);
	}
	printf("%f\n", sum );

}
