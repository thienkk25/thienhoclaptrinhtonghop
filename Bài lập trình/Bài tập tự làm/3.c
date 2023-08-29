//Nguyen Van Thien - 2121051573 - DCCTCT66G2
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
int a[100][100];
void nhap_ma_tran(int m ,int n);
void in_ma_tran(int m ,int n);
void max_min(int m, int n);
void doi_cho_2_so(int a ,int b);
void xap_xep_ma_tran_theo_hang(int m, int n);
void xap_xep_ma_tran_theo_all(int m, int n);
int main(){int m,n;
	printf("Nhap hang = "); scanf("%d",&m);
	printf("Nhap cot = "); scanf("%d",&n);
	nhap_ma_tran(m,n);
	in_ma_tran(m,n);
	max_min(m,n);
	xap_xep_ma_tran_theo_all(m,n);
	in_ma_tran(m,n);
}
void nhap_ma_tran(int m ,int n){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
	     	printf("Nhap a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);}}		
			}
void in_ma_tran(int m ,int n){
	for(int i=0;i<m;i++){
	 for(int j=0;j<n;j++) printf("%3d",a[i][j]);	
	printf("\n");}
}
void max_min(int m, int n){
int max=a[0][0],min=a[0][0];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
		if (a[i][j]>=max) max=a[i][j];
		if (a[i][j]<=min) min=a[i][j];
}
}
printf("Max la %d , Min la %d \n",max,min);
}
void doi_cho_2_so(int m ,int n){
	int b,c,d,e;
	printf("Vi tri ban dau : "); scanf("%d%d",&e,&b);
	printf("\nVi tri can doi : "); scanf("%d%d",&c,&d);
	int temp=a[e][b];
	a[e][b]=a[c][d];
	a[c][d]=temp;
}
void xap_xep_ma_tran_theo_hang(int m, int n){
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
	       for(int b=0;b<m;b++)
	          for(int c=0;c<n;c++)
			    for(int d=c+1;d<n;d++)
			       if(a[b][c]>=a[b][d]) {
			       	int t=a[b][c];
			       	a[b][c]=a[b][d];
			       	a[b][d]=t;
			       	}

}
void xap_xep_ma_tran_theo_all(int m, int n){
	for(int i=0;i<m;i++)
	  for(int j=0;j<n;j++)
	      for(int b=0;b<m;b++)
	          for(int c=0;c<n;c++)
					if(a[i][j]<=a[b][c]){
						int t=a[i][j];
						a[i][j]=a[b][c];
						a[b][c]=t;
						}
}
