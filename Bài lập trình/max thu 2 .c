#include<conio.h>
#include<stdio.h>
int main(){
    int a[100];
    int n;
    int max1 = 0;
    int max2 = 0;
   do {
    printf("Nhap so phan tu cua mang : ");
    scanf("%d",&n);
    } while (n<=0);
    printf("Nhap gia tri cua mang:\n");
    for(int i = 0; i < n; i++)
    {
        printf("a[%d]: ",i);
        scanf("%d",&a[i]);
    }   
    for(int i = 0; i < n; i++){
        if(max1 < a[i])  max1 = a[i];              
    }
    for(int i = 0; i < n; i++){
        if(max1 == a[i])  continue;  
           if(max2 < a[i])  max2 = a[i];      
    }
    printf("Max thu hai la :%d",max2);
    return 0;
}
