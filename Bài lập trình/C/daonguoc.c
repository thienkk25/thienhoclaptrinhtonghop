#include <stdio.h> 
#include <time.h>
int main(){
	double time;
	clock_t start,end;
	start=clock();
    int n, a;
    printf("nhap so : ");
    scanf("%d", &n);
    printf("dao nguoc lai la : ");
    while(n > 0){
        a = n % 10;
        n = n / 10;
     printf("%d",a);
    }
    end=clock();
    time=(double )( end - start ) / CLOCKS_PER_SEC;
    printf("\nThoi gian chay chuong trinh : %f",time);
}
