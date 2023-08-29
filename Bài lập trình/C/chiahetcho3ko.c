#include <stdio.h>
#include <math.h>
#include <conio.h>
int main() {
	int a;
	printf("nhap ");
	scanf("%d",&a);
	if (a%3==0) printf("%d co chia het cho 3",a);
	   else
 		  printf("%d ko chia het cho 3 , so du la %d ",a,a%3);
	getch();
	return 0;
	 } 
