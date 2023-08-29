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
void tong(int n){
	int s=0;
	for(int i=0;i<n;i++){
		if (a[i]<0) s+=pow(a[i],2);}
	printf("\nTong binh phuong so am trong mang la = %d",s);	
}
/* int tong(int n){
	int s=0;
	for(int i=0;i<n;i++)
		if (a[i]<0) s+=pow(a[i],2);
	return s;
		} */
int main(){
	int n;
	printf("Nhap n phan tu mang : ");
	scanf("%d",&n);
	nhap(n);
	hien(n);
	tong(n);
//	printf("nTong binh phuong so am trong mang la = %d",tong(n));	
}
