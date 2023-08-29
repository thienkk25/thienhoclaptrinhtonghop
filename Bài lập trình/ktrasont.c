#include <stdio.h>
#include <stdlib.h>
int sont(int a){
	if (a<2) return 0;
	for(int i=2;i*i<=a;i++)
	if (a%i==0) return 0;
	return 1;
		}
void nhap(int *a){
	printf("Nhap so nguyen : ");
	scanf("%d",a);
}
void ktra(int a){
	if(sont(a)) printf("%d la so nt ",a);
	else printf("%d khong la so nt ",a);
}		
int main(){
	int a;
	nhap(&a);
	ktra(a);
	}
