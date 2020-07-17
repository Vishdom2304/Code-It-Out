// Codeforces problem on the use of lower bound
// in this problem we have to find the number of pair of an array such that a[i] + a[j] > b[i] + b[j] for two array.
//problem link:- https://codeforces.com/contest/1324/problem/D


#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	int n;
	cin>>n;
	int a[n], b[n];
	vector<int> c(n);
	for(int i = 0 ;i< n ; i++){
		cin>>a[i];
	}
	for(int i = 0; i< n; i++){
		cin>>b[i];
		c[i] = a[i] - b[i];
	}
	sort(c.begin(), c.end());
	long long int count = 0;
	for(int i = n - 1; i>0; i--){
	   int low = lower_bound(c.begin(), c.begin() + i, 1 - c[i]) - c.begin();  // this is how to convert the iterator obtained from lower_bound() to integer.
		count = count + i - low;
	}
	cout<<count;
	return 0;
}
