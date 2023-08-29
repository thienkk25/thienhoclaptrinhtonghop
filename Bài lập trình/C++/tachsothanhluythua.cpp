#include <iostream>
#include <math.h>
using namespace std;
int main() {
	int n,i=2,a;
	cout<<"nhap n =";
	cin>>n;
	while(i<=n) {
		a=n/i;
	if (n%i==0) {cout<<i<<" ";
	n=a;
		}
	if(n%i!=0)	i++;
		}
}
