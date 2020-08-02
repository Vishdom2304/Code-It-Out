// codeforces problem on finding the sum of given portion of array given in all queries
// a very simple and efficient approach is given in the soln to count the frequency of all indexes of array
// problem link :- https://codeforces.com/problemset/problem/276/C

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long int n, q;
	cin>>n>>q;
	long long int arr[n];
	for(int i = 0; i<n; i++){
		cin>>arr[i];
		//cout<<arr[i]<<" ";
	}
	sort(arr, arr + n);
  
  
  
	long long int b[n] = {0};                                                          // from here.......
	long long int l,r;
	for(int i = 1; i<=q; i++){
		cin>>l>>r;
		l--; r--;
		b[l]++;
		if(r<n -1){
			b[r + 1]--;
		}
	//	cout<<b[l]<<" "<<b[r+1]<<" ";
  
                                                                                     // this complete block it the approach to count freq. on the indexes given n queries...
  
	}
	long long int c[n];
	long long int k = 0;
	for(int i = 0; i<n; i++){
		k = k + b[i];
		c[i] = k;
		//cout<<c[i]<<" ";
	}                                                                                  // to here ......
   
  
  
	sort(c, c + n);
	long long int sum = 0;
	for(int i = 0; i<n; i++){
		sum = sum + (arr[i]*c[i]);
	}
	cout<<sum;
	return 0;
}
