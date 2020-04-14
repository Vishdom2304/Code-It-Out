// Codeforces problem
// Problem link = https://codeforces.com/problemset/problem/16/A
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	string s;
	cin>>n>>m;
	int flag=0;
	for(int i=1;i<=n;i++){
		cin>>s;int a;
		for(int j = 1;j<m;j++){
			if(s[0] != s[j]){
				flag =1;
		}
	}
	if(flag == 0){
		if(i==1){
			a = s[0];
		}
		else{
			if(s[0]!=a){
				a = s[0];
			}
			else{
				flag =1;
			}
		}
	}
	}
	if(flag == 0){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
}
