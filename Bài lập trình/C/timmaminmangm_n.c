#include <stdio.h>
int main(){
	int a[100][100],m,n;
	printf("Nhap hang = "); scanf("%d",&m);
	printf("Nhap cot = "); scanf("%d",&n);
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
int max=a[0][0],min=a[0][0];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
		if (a[i][j]>=max) max=a[i][j];
		if (a[i][j]<=min) min=a[i][j];
}
}
printf("Max la %d , Min la %d",max,min);
}
