#include <stdio.h>
int a[100];
void arr(){
	for(int i=0;i<3;i++) {
	      printf("Nhap a[ %d ] = ",i);
		scanf("%d",a[i]);
		} 
		}
void hien(){ int i;
	for (i=0;i<3;i++) printf("%2d",a[i]);}		
int main() {
	arr();
	hien();	
	}
	
			
