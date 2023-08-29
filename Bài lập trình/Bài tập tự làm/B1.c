#include<stdio.h>
#include <conio.h>
#include<conio.h>
#include<stdlib.h>
int main ()
{
	int **a,m,n;
	do{
		printf("nhap hang : ");
		scanf("%d",&m);
		printf("nhap cot : ");
		scanf("%d",&n);
	}
	while(n<=0 || m<=0);
	a= (int**)calloc(sizeof(int*),m);
for(int i=0;i<m;i++)
	a[i]=(int*)calloc(sizeof(int),n);
	for(int i=0;i<m;i++) {
	for(int j=0;j<n;j++)
	{
		printf("a[%d][%d] = ",i,j);
		scanf("%d",&a[i][j]);
	}}
	printf("\n mang vua nhap la: \n");
	for(int i=0;i<m;i++){
	 for(int j=0;j<n;j++)
		printf("|%3d|",a[i][j]);
	 printf("\n");
	 }
	 for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
	       for(int q=0;q<m;q++) 
			for(int w=0;w<n;w++)
	if(a[i][j]<=a[q][w])	{		
			int t=a[i][j];
			a[i][j]=a[q][w];
			a[q][w]=t;
			}
			
	printf("Mang xap xep tang dan la :\n");		
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++) {printf("|%3d|",a[i][j]);
			}
	printf("\n");	
}
}	
