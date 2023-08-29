#include <stdio.h>
int main(){
	int x,i,m,n,d,a[100];
	for (i=1;i<=3;i++) {
     printf("nhap a[ %d ] = ",i);
     scanf(" %d ",&a[i]); }
	//	a[i]=b;	 }
/*	for (i=1;i<=2;i++) 	
	printf("liet ke lai  %d \n",a[i]);
}
*/
m=0; n=2;
	printf("nhap x=");
	scanf("%d",&x);
while (m<=n) {
	d=(m+n)/2;
	if (a[d]== x)
{ printf("ok"); break;}
	if ( a[d]<x) m=d+1; 
	      else n=d-1;
	}
if (a[3]==x) printf("ok");	
	}
