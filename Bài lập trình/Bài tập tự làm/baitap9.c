#include <stdio.h>
#include <math.h>
int a[100];
void nhap(int n){
	for(int i=0;i<n;i++){
		printf("Nhap a[%d] = ",i);
		scanf("%d",&a[i]);
		}}
void hien(int n){
	printf("Mang vua nhap : \n");
	for(int i=0;i<n;i++) printf("%3d",a[i]);}
void daomang(int n){
	for(int i=0;i<(n/2);i++) {
		int t=a[i];
	    a[i]=a[n-i-1];
	    a[n-i-1]=t;
	    }
}
void hiensaukhidao(int n){
	printf("\nMang dao thanh : \n");
	for(int i=0;i<n;i++) printf("%3d",a[i]);
}
int main(){
	int n;
	printf("Nhap n phan tu mang : ");
	scanf("%d",&n);
	nhap(n);
	hien(n);
	daomang(n);
	hiensaukhidao(n);
}
