#include<stdio.h>
#include <stdlib.h>
int a[1000];
void nhap(int n){
	for(int i=0;i<n;i++){
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
		}
}
void hien(int n) {
	printf("Mang vua nhap :\n");
	for(int i=0;i<n;i++)
		printf("%3d",a[i]);
}
int songuyento(int a)
{
    if (a<=1) return 0;
    int i;
    for (i=2; i*i<=a; i++)
        if (a%i==0) return 0;
    return 1;
}
int ucln(int a, int b)
{
    while (a != b)
    if (a>b) a-=b;
    else b-=a;
    return b;
}
void capnt(int n){
	printf("\nCac cap so nguyen to la:\n");
    for (int i=0; i<n-1; i++)
        for (int j=i+1; j<n; j++)
        if(songuyento(a[i]) && songuyento(a[j]) && ucln(a[i],a[j])==1)
        printf("(%d;%d)\t",a[i],a[j]);
}
int main()
{
    int n;
    do {
    printf("Nhap so phan tu cua mang : ");
    scanf("%d",&n);
    } while (n<=0);
    nhap(n);
    hien(n);
    capnt(n);
}
