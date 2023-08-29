#include <stdio.h>
// Ktra so nguyen co la so fibonacci hay khong ?
// cach 1 :
int fib(int n){
	if(n<2) return n;
	return fib(n-1)+fib(n-2);
}
void nhap(int *n){
	printf("\nNhap so nguyen : ");
	scanf("%d",n);
}
void cacdsfib(int *a[100]){
	for(int i=1;i<=10;i++)
		a[i-1]=fib(i);
}
void ktra(int n , int a[100]){
	for(int i=0;i<10;i++)
	if (n==a[i]) {
		printf("%d co la so fib",n);
		break; }
	else {
	   printf("%d ko la so fib",n);
	   break;}
}
int main(){
	int n,a[100];
	cacdsfib(&a);
	for(int i=0;i<10;i++)
	printf("%3d",a[i]);
	nhap(&n);
	ktra(n,a);
}
/* cach 2 :
void fib(int n){
	int a1=1,a2=1;
	while(n>a2)
		if(a2){
			a2=a2+a1;
			a1=a2-a1;
		}
	if(n==a2) printf("la so fib\n");
		else printf("ko la so fib\n");
}
int main(){
	int n;
	do {
		scanf("%d",&n); 
		fib(n);
		}
		while(n!=0);
}
*/
