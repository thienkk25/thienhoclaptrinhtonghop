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
void hienl(int m ,int n){
	printf("Mang sau khi doi : \n");
	for(int i=0;i<m+1;i++){
	 for(int j=0;j<n-1;j++) printf("%3d",a[i][j]);
	 printf("\n");}}
void hiens(int m ,int n){
	printf("Mang sau khi doi : \n");
	for(int i=0;i<m-1;i++){
	 for(int j=0;j<n+1;j++) printf("%3d",a[i][j]);
	 printf("\n");}}
int main(){ int t;
	int m,n;
	printf("Nhap hang = "); scanf("%d",&m);
	printf("Nhap cot = "); scanf("%d",&n);
	nhap(m,n);
	printf("Mang vua nhap la : \n");
	hien(m,n);
	if(m==n){
	for(int i=0;i<m;i++){
	 for(int j=i;j<n;j++) {
	 	t=a[i][j];
	 	a[i][j]=a[j][i];
	 	a[j][i]=t;
	 	}}
	 	printf("Mang sau khi doi : \n");
	 	hien(m,n);
}
else	if(m<n)  { 
	for(int i=0;i<m+1;i++){
	 for(int j=i;j<n;j++) {
	 	t=a[i][j];
	 	a[i][j]=a[j][i];
	 	a[j][i]=t;
	 	}}
	 printf("\n");
	hienl(m,n);
}
else {
	for(int i=0;i<m;i++){
	 for(int j=i;j<n+1;j++) {
	 	t=a[i][j];
	 	a[i][j]=a[j][i];
	 	a[j][i]=t;
	 	}}
	 printf("\n");
	 hiens(m,n);
}}
