#include <stdio.h>
#include <math.h>
int main(){
	float a,b,c,sum;
	printf("Nhap diem toan "); scanf("%f",&a);
	while (a<0 || a>10) { scanf("%f",&a);}
	printf("Nhap dien ly "); scanf("%f",&b);
	while (b<0 || b>10) { scanf("%f",&b);}
	printf("Nhap diem hoa "); scanf("%f",&c);
	while (c<0 || c>10) { scanf("%f",&c);}
	sum=(a+b+c)/3;	printf("%f\n",sum);
	if (sum<5) printf("yeu");
	else if (sum<6) printf("tb");
	else if (sum<7) printf("tb kha");
	else if (sum<8) printf("kha");
	else if (sum<9) printf("gioi");
	else if (sum<10) printf("xsac");
	return 0;
	}
