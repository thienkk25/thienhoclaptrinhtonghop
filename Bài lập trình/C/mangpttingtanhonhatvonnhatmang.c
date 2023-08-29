#include <stdio.h>
int main(){
	int a[100],n,max,min;
	do{
		printf("nhap so luong phan tu: ");
		scanf("%d",&n);
		}while(n<=0 || n>100);
	for(int i=0;i<n;i++){
		printf("nhap a[%d]: ",i);
		scanf("%d",&a[i]);
		}
  max=a[0]; min=a[0];
	for(int i=0;i<n;i++){
		if (a[i]>=max) max=a[i];
		if (a[i]<=min) min=a[i];		
		}
		printf("Max la %d \n",max);
		printf("Min la %d \n",min);
   for(int i=0;i<n;i++){
  	if (max==a[i]) printf(" vtri max la : %d ",i+1);
  	if (min==a[i]) printf(" vtri min la : %d ",i+1);
}}
