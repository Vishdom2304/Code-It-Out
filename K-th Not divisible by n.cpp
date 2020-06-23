//codeforces problem to find k-th n0. not divisible by n.
//Problem link : - https://codeforces.com/contest/1352/problem/C
#include<iostream>
using namespace std;
int main(){
	int t,n,k;
	cin>>t;
	while(t--){
		cin>>n>>k;
		long long int a = (k-1)/(n-1);
		cout<<k + a<<"\n";
	}
}
