#include <stdio.h>
#include <math.h>
int main(){
	int n;
	printf("nhap so nguyen n = ");
	scanf("%d",&n);
	if (n==pow(sqrt(n),2)) 
	printf("so chinh phuong");
	else printf("ko la so chinh phuong");
	return 0;
	}
