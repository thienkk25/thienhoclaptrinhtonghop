#include <stdio.h>
int a[100][100];
void nhap(int m ,int n){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
	     	printf("Nhap a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);}}}
void hien(int m ,int n){
	for(int i=0;i<m;i++){
	 for(int j=0;j<n;j++) printf("%3d",a[i][j]);	
	printf("\n");}}
void daomang(int m, int n){
	for(int i=0;i<m;i++)
		for(int j=i;j<n;j++) {
			int t=a[i][j];
			a[i][j]=a[j][i];
			a[j][i]=t;
}
}
void hiendao(int m ,int n){
	for(int i=0;i<m;i++){
	 for(int j=0;j<n;j++) printf("%3d",a[i][j]);
	 printf("\n");}}
int main(){
	int m,n;
	printf("Nhap hang = "); scanf("%d",&m);
	printf("Nhap cot = "); scanf("%d",&n);
	nhap(m,n);
	printf("Mang vua nhap la : \n");
	hien(m,n);
	daomang(m,n);
	hiendao(m,n);
}
