//Nguyen Van Thien - 2121051573 - DCCTCT66G2
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
int xoadau( char t[100],char s[100]);
int xoacuoi( char t[100],char s[100]);
void xoa2lt( char t[100] ,char s[100]);
int m (int d , char t[100] ,char s[100]);
int k (int d , char t[100] ,char s[100]);
int main(){
	char t[100],s[100];
	int n;
	system("cls");
	printf("Nhap chuoi :\n");
 	gets(t);
    printf("\nVua nhap la :\n");
    printf("[%s]\n",t);
	printf("\n");
 printf("1.Xoa cac dau trang dau.\n2.Xoa cac dau trang cuoi.\n3.Xoa 2 dau trang lien tiep.\nAn bat ki de dung.\nChon :\n"); scanf("%d",&n);
 switch(n)
 { 	
 	case 1: xoadau(t,s); fflush(stdin); break;
 	case 2: xoacuoi(t,s); fflush(stdin); break;
 	case 3: xoa2lt(t,s); fflush(stdin); break;
 	default: break;
 }
}
int xoadau(char t[100],char s[100]){
	printf("\nxoa cac dau \"_\" dau :\n");
	int d = 0,len=strlen(t);
	 for(int i = 0; i < len ; i++) {
      if ((t[i] ==' ') || (t[i]=='	')) {
      	 d++;
      	 continue;
      	 }
      if(t[i] !=' ') break;
  } 
  return k(d,t,s);
}
int xoacuoi(char t[100],char s[100]){
	printf("\nxoa cac dau \"_\" cuoi :\n");
	int d = 0,len=strlen(t)-1;
	 for(int i = len; i >=0 ; i--) {
      if ((t[i] ==' ') || (t[i]=='	')) {
      	 d++;
      	 continue;
      	 }
      if(t[i] !=' ') break;
  } 
  return m (d,t,s);
}
void xoa2lt( char t[100], char s[100]){ 
	printf("\nxoa 2 dau \"__\" lien tiep :\n");
     int d = 0;
  for(int i =0; i < strlen(t); i++) {
      if ((t[i] ==' ') && (t[i+1]==' ')){
      i++;
      continue;
     }   	
      s[d] = t[i];
      d++;
  }
	printf("%s",s);
}
int m (int d , char t[100] ,char s[100]){
	int a=0;
	for(int i = 0; i < strlen(t)-d ; i++) {
		s[a++]=t[i];
}
printf("[%s]",s);
}
int k (int d , char t[100] ,char s[100]){
	int a=0;
	for(int i = d; i < strlen(t) ; i++) {
		s[a++]=t[i];
}
printf("[%s]",s);
}
