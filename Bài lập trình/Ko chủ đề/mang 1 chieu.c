#include <stdio.h>
int main(){
	int a[100],n;
	printf("nhap mang \n");
	for(int i=0;i<5;i++){
		scanf("%d",&a[i]);}
		printf("xoa vi tri 	:  ");
		scanf("%d",&n);
	for(int i=n-1;i<4;i++){
			 a[i]=a[i+1];}
	for(int i=0;i<5;i++) printf("%3d",a[i]);		 
			 }
