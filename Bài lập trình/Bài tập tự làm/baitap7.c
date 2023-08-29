#include <stdio.h>
unsigned int a[100];
void nhap(int n){
	for(int i=0;i<n;i++){
		printf("Nhap a[%d] = ",i);
		scanf("%d",&a[i]);
		}}
void hien(int n){
	printf("Mang vua nhap : \n");
	for(int i=0;i<n;i++) printf("%3d",a[i]);}	
void sole(int n){ int d=0;
	printf("\nCac so le la : ");
	for(int i=0;i<n;i++){
		if (a[i]%2==1) { 
			d++; 
			printf("%3d",a[i]);
			}}
	printf("\nCo %d so le trong mang",d);	
}
void sochan(int n){ int d=0;
	printf("\nCac so chan la : ");
	for(int i=0;i<n;i++){
		if (a[i]%2==0) { 
			d++; 
			printf("%3d",a[i]);
			}}
	printf("\nCo %d so chan trong mang",d);	
}
int ktra(int o){ 
	int m=0;
	for(int i=1;i<=o;i++){
		if(o%i==0) m++;
		}
	if (o==1) return 0;
	if (m==2) return 1;
		return 0;		
}
void sont(int n){
	printf("\nCac so nguyen to la : ");
	for(int i=0; i<n;i++){
		if (ktra(a[i])==1) 
		printf("%3d",a[i]);
}}
void kosont(int n){
	printf("\nCac so ko phai nguyen to la : ");
	for(int i=0; i<n;i++){
		if (ktra(a[i])==0) 
		printf("%3d",a[i]);
}}
int main(){
	unsigned int n;
	printf("Nhap n phan tu mang : ");
	scanf("%d",&n);
	nhap(n);
	hien(n);
	sole(n);
	sochan(n);
	sont(n);
	kosont(n);
	}
