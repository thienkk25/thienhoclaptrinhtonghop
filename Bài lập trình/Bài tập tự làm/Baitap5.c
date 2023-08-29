#include <stdio.h>
#include <math.h>
int a[100][100];
void nhap(int m, int n){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
	     	printf("Nhap a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
}
}
}
void hien(int m,int n){
	for(int i=0;i<m;i++){
	 for(int j=0;j<n;j++) printf("%3d",a[i][j]);	
	printf("\n");
		}}
void ktra(int o , int m ,int n){
	int dem=0;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if (o==a[i][j]) {
				dem++;
		printf("Lam o vi tri a[%d][%d]\n",i,j);
				}
			}
			}
	if (dem>0){ printf("So trung so trong mang :\n");
		printf("Co %d ptu trung\n",dem);
		}
			else printf("Ko co");
			}
int main() {
	int m,n,o;
	printf("Nhap hang = "); scanf("%d",&m);
	printf("Nhap cot = "); scanf("%d",&n);
	nhap(m,n);
	printf("Mang vua nhap la : \n");
	hien(m,n);
	printf("Nhap mot so nguyen ");
	scanf("%d",&o);
	ktra(o,m,n);	
}
