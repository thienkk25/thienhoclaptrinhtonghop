#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
 srand(time(NULL));
// printf("%d",RAND_MAX);
 int i,a,b; 	
 	a=rand()%100;
    b=rand()%100;
 	printf("so nn ko trung %d-%d\n",a,b); 
 	return 0;
 	}
