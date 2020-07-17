// codeforces problem on the use of pair of pairs and set of pair of pairs.
// in this problem we store the previous position and the search in set for a pair of prev. position and current position (basic idea is something like this)
// problem link :- https://codeforces.com/contest/1351/problem/C

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		set< pair< pair<int, int>, pair<int, int> > > st;
		pair<int, int> prevpos = {0, 0};
		pair< pair<int, int> , pair<int, int>  > p3;
		pair< pair<int, int>, pair<int, int> > p4;
		int x = 0, y = 0;
		long long int sum = 0;
		for(int i = 0; i < s.length() ; i++){
			if(s[i] == 'E'){
				x++;
			}
			else if(s[i] == 'W'){
				x--;
			}
			else if(s[i] == 'N'){
				y++;
			}
			else{
				y--;
			}
			p3 = {prevpos, {x, y}};
			p4 = {{x, y}, prevpos};
			if(st.count(p3) || st.count(p4)){
				sum++;
			}
			else{
				st.insert(p3);
				sum = sum + 5;
			}
			prevpos = {x, y};
		}
		cout<<sum<<"\n";
	}
	return 0;
}
