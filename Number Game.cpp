// codeforces problem on alternate operations between two users 
// problem link :- https://codeforces.com/contest/1370/problem/C
#include <iostream>
#include <math.h>
using namespace std;
int power2(int n){
	int ce  = 0;
	while(n%2==0){
		ce++;
		n = n/2;
	}
	return ce;
}
int oddprimeFactors(int n)  
{  
	int co = 0;
  
    // n must be odd at this point. So we can skip  
    // one element (Note i = i +2)  
    for (int i = 3; i <= sqrt(n); i = i + 2)  
    {  
        // While i divides n, print i and divide n  
        while (n % i == 0)  
        {  
            co++; 
            n = n/i;  
        }  
    }  
  
    // This condition is to handle the case when n  
    // is a prime number greater than 2  
    if (n > 2)  
        co++;
    return co;
}  
int main() {
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	int t,n;
	cin>>t;
	string a = "Ashishgup";
	string f = "FastestFinger";
	while(t--){
		cin>>n;
		int m = n;
		if(n==1){
			cout<<f<<endl;		}
	else if(n == 2){
		cout<<a<<endl;
	}
	else if(n%2!=0){
		cout<<a<<endl;
	}
	else{
		int ce = power2(n);
		int co = oddprimeFactors(n);
		if(m == pow(2, ce)){
			cout<<f<<endl;
		}
		else{
		if(ce>1){
			cout<<a<<endl;
		}
		else{
			if(co == 1){
				cout<<f<<endl;
			}
			else{
				cout<<a<<endl;
			}
		}
	}
	}
	}
	return 0;
}
