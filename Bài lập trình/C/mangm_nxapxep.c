#include <stdio.h>
#include <alloca.h>
int main(){
	int a[100][100],m,n;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
	     	printf("Nhap a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
}}
	printf("Mang vua nhap la :\n");		
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++) printf("%3d",a[i][j]);
	printf("\n");
}
	for(int i=0;i<m;i++)
		for(int j=0;j<n-1;j++)
	for(int b=j+1;b<n;b++)
	if(a[i][j]>=a[i][b]) 
	 {
		int t=a[i][b];
		a[i][b]=a[i][j];
		a[i][j]=t;
		}
	printf("Mang la :\n");		
for(int i=0;i<m;i++){
		for(int j=0;j<n;j++) printf("%3d",a[i][j]);
	printf("\n");
}

}
