#include <stdio.h>
int main() {
	int i,n;
	float a;
	printf("nhap n =");
	scanf("%d",&n);
	a=0;
	for (i=1;i<=n;i++) 
	{ 
    a+=(float)1/i;
		}
    printf("kq %0.2f",	a);
		}
