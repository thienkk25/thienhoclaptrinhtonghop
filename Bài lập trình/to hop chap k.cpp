#include <iostream>
#include <stdlib.h>
using namespace std;
int n,a[10],k;
void in(){
	for(int i=1;i<=k;i++)
	   cout<<a[i];
	cout<<endl;
}
void lietke(int i){
	for(int j=a[i-1]+1;j<=n-k+i;j++){
	  a[i]=j;
	if (i==k) in();
	else lietke(i+1);
}}
int main(){
	cout<<"nhap do dai , chap k : ";
	cin>>n>>k;
	a[0]=0;
	lietke(1);
}
