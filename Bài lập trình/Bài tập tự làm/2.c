//Nguyen Van Thien - 2121051573 - DCCTCT66G2
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
void dem(char t[100]);
int main(){
	char t[100],s[100];
	system("cls");
	printf("Nhap chuoi :\n");
    gets(t);
    printf("\nVua nhap la :\n");
    printf("[%s]",t);
    dem(t);
}
void dem(char t[100]){
	int d=0;
	if (t[0]!=' ') d=1;
	for(int i=0;i<strlen(t);i++)
		if((t[i]==' ') && (t[i+1]!=' ')) d++;
	printf("\nSo tu trong doan la : %d",d);
}
