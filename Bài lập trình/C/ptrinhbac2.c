#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	system("cls");
	float dt,a,b,c;
	float x,x1,x2;
	printf("nhap a ");
	scanf("%f",&a);  
	printf("nhap b ");
	scanf("%f",&b);   
	printf("nhap c ");
	scanf("%f",&c);
	dt=b*b-4*a*c;
	if (dt==0) {
		 x=-c/a; printf("%f",x);
	  if (a==0 && b==0 && c!=0) printf("vo nghiem");
	  if (a==0 && b==0 && c==0) printf("vo so nghiem");
	  }
	  else {
	  	if (dt<0) printf("vo nghiem"); 
	  else 
	  { x1=(-b+sqrt(dt))/(2*a);
	  	x2=(-b-sqrt(dt))/(2*a);
	  	printf("%f",x1);
	  	printf("%f",x2);
	  	}}
	return 0;
	}
