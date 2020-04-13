#include <iostream>
using namespace std;
 
int main() {
    long long int n,k,a,p;
    cin>>n>>k;
    if(n%2==0){
    	 a = n-1;
    }
    else{
    	a = n;
    }
    if((2*k)-1 > a){
    	p = (a+1)/2;
    	n = k-p;
    	cout<<2*n;
    }
    else{
    	cout<<(2*k)-1;
    }
	return 0;
}
