// codechef problem on finding the missing vertex from 4n - 1 given vertices of n rectangle.
// https://www.codechef.com/JULY20B/problems/PTMSSNG
// here bitwise xor of all elements (x-coordinate and y - coordinate separately) is taken to find the x and y occuring odd no. of times.

#include <iostream>
using namespace std;

int main() {
	int t,n,a,b;
	cin>>t;
	while(t--){
		cin>>n;
		long long int X = 0, Y = 0;
		long long int m = ((4*n) - 1);
		while(m--){
			cin>>a>>b;
			X = X ^ a;
			Y = Y ^ b;
		}
		cout<<X<<" "<<Y<<"\n";
	}
	return 0;
}
