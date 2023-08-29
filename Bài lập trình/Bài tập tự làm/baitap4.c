#include <stdio.h>
int a[100];
void nhap( int n){
	printf("Nhap mot day so : ");
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
}
void hien(int n){
	for(int i=0;i<n;i++) printf("%3d",a[i]);
		}
int ktra(int n) {
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)	
	if (a[i]<=a[j]) continue;
	else {
		return 0; break;}
	return 1;
	}
void them(int n){
	int them_vt;
	printf("\nThem vtri : "); scanf("%d",&them_vt);
	for(int i=n;i>them_vt-1;i--){
		a[i]=a[i-1];
	}
	printf("Gia tri them vao : ");
	scanf("%d",&a[them_vt-1]);
	}
void hiensaukhithem(int n){
	printf("Mang sau khi them : ");
	for(int i=0;i<n+1;i++) printf("%3d",a[i]);
		}
int ktrasaukhithem(int n) {
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)	
	if (a[i]<=a[j]) continue;
	else {
		return 0; break;}
	return 1;
	}			
int main(){
	int n,check;
	do{	
		do {
	printf("\nNhap n so : "); scanf("%d",&n);
	nhap(n);
	printf("day so vua nhap la : ");
	hien(n);
	ktra(n);
	check=ktra(n);
	}while(check==0);
	them(n);
	hiensaukhithem(n);
	check=ktrasaukhithem(n);
}while(check==0);
}
