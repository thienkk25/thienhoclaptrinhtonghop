#include<stdio.h>
#include <conio.h>
#include<conio.h>
#include<stdlib.h>
int main ()
{
	int **a;
	int m,n;
	// nhap m,n
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
		printf("a[%d][%d]: ",i,j);
		scanf("%d",&a[i][j]);
	}}
	printf("\n mang vua nhap la: \n");
	for(int i=0;i<m;i++){
	 for(int j=0;j<n;j++)
		printf("%3d",a[i][j]);
	 printf("\n");}
int max=a[0][0],min=a[0][0];
	 for(int i=0;i<m;i++){
	 for(int j=0;j<n;j++){
	 	if(a[i][j]>=max) max=a[i][j];
	 	if(a[i][j]<=min) min=a[i][j];
	 	}}
	printf("Max %d , Min %d",max,min);
	 for(int i=0;i<m;i++) free(a[i]);
	free(a);
	getch();
	return 0;
	
}
