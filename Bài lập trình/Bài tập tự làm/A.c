/* 
A. Sử dụng cấp phát bộ nhớ động nhập mảng n phần tử kiểu số nguyên.
Tìm và in ra những phần tử là số chẵn, là số lẻ
Tìm in ra những phần tử chia hết cho 3
Tìm giá trị phần tử lớn nhất là số nguyên tố */
//Nguyen Van Thien 2121051573
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
int main(){
	int *a,n;
	do {
	printf("nhap n phan tu : "); scanf("%d",&n);	
}while(n<=0);
    a=(int*)calloc(sizeof(int),n);
   for(int i=0;i<n;i++){
   	printf("a[%d] = ",i); scanf("%d",&a[i]); }
   	printf("Mang vua nhap : \n");
   	for(int i=0;i<n;i++)  	printf("%3d",a[i]);
   	printf("\nCac so chan la : ");
	for(int i=0;i<n;i++) {
		if(a[i]%2==0) printf("%3d",a[i]);}
	printf("\nCac so le la : ");
	for(int i=0;i<n;i++) {
		if(a[i]%2==1) printf("%3d",a[i]);}
		printf("\nCac so chia het cho 3 la : ");
	for(int i=0;i<n;i++) {
		if(a[i]%3==0) printf("%3d",a[i]);}	
int *b,s=0;	
		b=(int*)calloc(sizeof(int),n);	
	for(int i=0;i<n;i++) { int d=0;
	for(int j=1;j<=a[i];j++) if (a[i]%j==0) d++;
	if (d==2) {
		b[s]=a[i]; s++;
		}
	}
int max=b[0];	
	for(int i=1;i<s;i++) if(b[i]>=max) max=b[i];
	printf("\n%d la gia tri phan tu lon nhat la so nguyen to",max);
	free(a);free(b);
	getch();		
	return 0;	
	}	
