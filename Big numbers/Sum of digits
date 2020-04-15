//Codeforces problem
//Problem link = https://codeforces.com/problemset/problem/102/B
#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin>>s;
	int sum = 0;
	int count = 0;
	if(s.length() == 1){
		cout<<"0";
	}
	else{
	for(int i = 0;i<s.length();i++){
		sum = sum + (s[i]-'0');                 //This is how we calculate the sum of elements of a string 
	}
	
	while(sum>9){
		int add = sum;
		sum = 0;
		while(add>0){
			
			sum = sum +add%10;
			add = add/10;
		}
		count++;
	}
	cout<<count+1;
	}
	return 0;
}
