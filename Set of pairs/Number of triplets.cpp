// codeforces problem on use of pairs of set
// problem link :- [porblem link here](https://codeforces.com/contest/181/problem/B)
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int a,b,n;
	set< pair<int, int> > s;
	vector<pair<int, int> > v;
		cin>>n;
		for(int i = 0; i<n; i++){
			cin>>a>>b;
			s.insert(make_pair(a, b));
			v.push_back(make_pair(a, b));
			}
			int count = 0;
		for(int i = 0; i<n-1; i++ ){
			for(int j = i + 1; j<n ; j++){
				int x = v[i].first + v[j].first;
				int y = v[i].second + v[j].second;
				if(x%2==0 && y % 2 == 0){
				  if(s.find(make_pair(x/2, y/2))!= s.end()){
				  	count++;
				  }
				}
			}
		}
	cout<<count;
	return 0;
}
