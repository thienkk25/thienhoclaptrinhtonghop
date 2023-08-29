#include <stdio.h>
int main() {
	int n,i;
	printf("Nhap n = ");
	scanf("%d",&n);
	for (i=0 ; i<n ;i++) {
    if (i%2 == 0) printf("so chan nho hon n la %d\n",i);
		else printf("so le nho hon n la %d\n",i);
		}
}
