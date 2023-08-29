#include <stdio.h>
#include<conio.h>
int main(){
	int a[100];
	int max,min,n,temp;
	do{
		printf("nhap so luong phan tu: ");
		scanf("%d",&n);
		}while(n<=0 || n>100);
	for(int i=0;i<n;i++){
		printf("nhap a[%d]: ",i);
		scanf("%d",&a[i]);
		}
	printf("Mang vua nhap la : \n");
	for(int i=0;i<n;i++) printf("%d\t",a[i]);
	printf("\nMang tu trai sang phai la : \n");
	for(int i=0;i<n;i++) printf("%d\t",a[i]);
	printf("\nMang tu phai sang trai la : \n");	
	for(int i=n-1;i>=0;i--) printf("%d\t",a[i]);
	printf("\n");
    max=a[0]; min=a[0];
	for(int i=1;i<n;i++) {
		if (a[i]>=max) max=a[i];
		if (a[i]<=min) min=a[i];		
		}
		printf("Max la %d \n",max);
		printf("Min la %d \n",min);
	printf("\n Mang theo thu tu tang dan la : \n");
	for(int i = 0; i < n; i++){
		for(int j=i+1;j<=n-1;j++){
            if(a[i] > a[i+1]){
                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;        
        }}}
	for(int i=0;i<n;i++) printf("%d\t",a[i]);	
		}
