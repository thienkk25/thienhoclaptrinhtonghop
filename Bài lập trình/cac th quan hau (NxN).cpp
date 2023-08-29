#include <iostream>
using namespace std;
int n,a[100],cot[100],d1[100],d2[100];
int b[100][100],d;
void in(){
	memset(b,0,sizeof(b));
	for(int i=1;i<=n;i++){
		b[i][a[i]]=1;
	}
	for(int i=1;i<=n;i++) {
		for(int j=1;j<=n;j++){
	  	cout<<"|"<<b[i][j]<<"|";}
	cout<<endl;
		}
	cout<<endl;
}
void ktra(int i){
	for(int j=1;j<=n;j++){
	if(cot[j]==1 && d1[i-j+n]==1 && d2[i+j-1]==1){
		a[i]=j;
		cot[j]=d1[i-j+n]=d2[i+j-1]=0;
		if (i==n) {in();
			++d;}
		else {
			ktra(i+1);
			}
		cot[j]=d1[i-j+n]=d2[i+j-1]=1;
	}
	}
	}
int main(){
	do {	
		cout<<"ban co NxN : ";
		cin>>n;}
	while (n<=3);
	for(int i=1;i<=99;i++)
	cot[i]=d1[i]=d2[i]=1;
	ktra(1);
		cout<<"co "<<d<<" cach xap xep quan hau";
}
