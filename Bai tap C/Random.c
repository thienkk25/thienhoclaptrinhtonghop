#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
 srand(time(NULL));
// printf("%d",RAND_MAX);
 int i,a;
 for(i=1; i<=2; i++ ) {  	
 	a=rand()%5;
 	printf("so %d\n",a); }
 	
 	return 0;
 	}
