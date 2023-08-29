#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct mathang
{
	char mahang[5];
	char tenhang[30];
	int soluong;
	float dongia;
};
void nhap(mathang &a){
	fflush(stdin);
	printf("ma hang \n");
	gets(a.mahang);
	printf("ten hang \n");
	gets(a.tenhang);
	printf("so luong \n");
	scanf("%d",&a.soluong);
	printf("don gia \n");
	scanf("%f",&a.dongia);
	printf("\n");
}
void in(mathang &a){
	printf("\n");
	printf("ma hang %s\n",a.mahang);
	printf("ten hang %s\n",a.tenhang);
	printf("so luong %d\n",a.soluong);
	printf("don gia %.3f\n",a.dongia);
	printf("\n");
}
int main(){ 
		int n;
	do { 
	printf("nhap n : ");
	scanf("%d",&n);
	} while (n<=0);
	mathang a[n],*oo=&a[0];
	for(int i=0;i<n;i++) nhap(a[i]);
	printf("---------------------------------------\n");
	printf("danh sach vua nhap la:\n");
	for(int i=0;i<n;i++) in(a[i]);
	printf("---------------------------------------\n");
	printf("all ma hang hc01 la:\n");
	for(int i=0;i<n;i++){ 
		int  c=strcmp(a[i].mahang,"hc01");
	if (c==0) in(a[i]);
	}
	printf("---------------------------------------\n"); 
	printf("so tien lon nhat\n");
	int max=a[0].dongia*a[0].soluong;
	for(int i=1;i<n;i++) if (a[i].dongia*a[i].soluong >= max) {
		max=a[i].dongia*a[i].soluong;
		oo=&a[i];
	}
	in(*oo);
   printf("---------------------------------------\n"); 
  printf("xap xep so luong tang dan \n");
  for(int i=0;i<n-1;i++) for(int j=i+1;j<n;j++)
    if (a[i].soluong > a[j].soluong){
    	int d=a[i].soluong;
    	a[i].soluong=a[j].soluong;
    	a[j].soluong=d;
	}
	 for(int i=0;i<n;i++) in(a[i]);
}
