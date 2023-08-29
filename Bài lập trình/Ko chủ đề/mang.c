#include <stdio.h>
#define k 4
int nhap() {
	static a[k]; int i;
	for (i=1;i<=k;i++) {
	printf("Nhap a[%d] = ",i);
		scanf("%d",&a[i]);
		}
		return a;
		}
void hien( int a[] ){ int i;
	for (i=1;i<=k;i++) {
	printf("Hien lai mang nhap = %d ",a[i]);
	printf("\n");		
	}
	}
int main(){
	int a[k];
	int arr;
    nhap(a);
	hien(arr);
	return 0;
	}	
	
