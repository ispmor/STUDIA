#include <stdio.h>
#include <stdlib.h>

int main( int argc, char *argv[]){
	int nwd = 1;
	int pom;
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);
	
if(argc !=0)
	if(b != 0){
	while(b != 0){
		pom = (a % b);
		a = b;
		b = pom;
		}
		
		nwd = a;
	}
	else
		nwd = 1;
else 
	return 1;



	printf("%i\n",nwd);

	return 0;

}
