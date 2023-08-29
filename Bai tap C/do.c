#include <stdio.h>
int main() {
	int chon,a,b;
	do {
	printf(" Nhap a = "); scanf("%d",&a);
	printf(" Nhap b = "); scanf("%d",&b);			 
	printf("\n|~~~~~~MENU~~~~~|""\n1. Tinh tong a + b ""\n2. Tinh tich a * b ""\n3. Tinh hieu a - b ""\n0. Dung lai <><><>""\n Chon : ");	
	scanf("%d",&chon);
	switch (chon) {
	case 1 : printf(" Tong a + b = %d \n",a+b); break;
	case 2 : printf(" Tich a * b = %d \n",a*b); break;
	case 3 : printf(" Hieu a - b = %d \n",a-b); break;
	case 0 : break;					
	} 	
	} while (chon != 0);
	return 0;
}   
