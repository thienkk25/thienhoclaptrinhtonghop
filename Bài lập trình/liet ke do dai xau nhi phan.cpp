﻿#include <iostream>
#include <stdlib.h>
using namespace std;
int n,a[10];
void in(){
	for(int i=1;i<=n;i++)
	   cout<<a[i];
	cout<<endl;
}
void lietke(int i){
	for(int j=0;j<=1;j++){
	  a[i]=j;
	if (i==n) 
		in();
	else 
		lietke(i+1);
}}
int main(){
	cout<<"nhap do dai =";
	cin>>n;
	lietke(1);
}
