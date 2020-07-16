// codechef problem on the use of stack to find the least index at which a non - empty balanced bracket sequence is obtained in  a string.
// Problem link :- [here](https://www.codechef.com/problems/CLBRKT)

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	int t,q;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int n = s.length();
		stack<int> st;
		vector<int> v(n, -2);
		for(int i = 0; i< n ; i++){
			if(s[i] == '('){
				st.push(i);
			}
			else if(!st.empty()){
				v[st.top()] = i;
				st.pop();
			}
		}
		for(int i = n-2; i>=0; i--){
			if(s[i] == ')'){
				v[i] = v[i + 1];
			}
		}
		cin>>q;
		int ab;
		for(int i = 1; i<=q; i++){
			cin>>ab;
			cout<<v[ab - 1] + 1<<"\n";
		}
	}
	return 0;
}
