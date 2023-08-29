#include <iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"nhap a,b : "; 
	cin>>a>>b;
	while(a!=b){
		if (a>b) a-=b;
		   else b-=a;
		}
	cout<<"Uc chung lon nhat la "<<a;
		}	
