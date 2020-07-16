// codechef problem on the use of lower bound and iterators
problem link :- https://www.codechef.com/JULY20B/problems/DRCHEF



#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <math.h>
using namespace std;

int main() {
	  ios_base::sync_with_stdio(false); 
    cin.tie(NULL);    
    cout.tie(NULL);
	int t,n,x;
	cin>>t;
	while(t--){
		cin>>n>>x;
		vector<int> v(n);
		for(int i = 0;i<n;i++){
			cin>>v[i];
		}
		sort(v.begin(), v.end());
		vector<int>::iterator low = v.begin();
		long long int count = 0;
		long long int flag = 0;
		while(v[n-1]!=0){
			int z = ceil(x/2);
			
			if(low == v.end()){
				flag = n - flag;
				count = count + flag;
				break;
			}
			low = lower_bound(low, v.end(), z);
		
			if(low!=v.end()){
			auto a = low;
			int p = *a;
			if(x>=p){
				x = 2*min(x, p);
				flag++;
				low = low + 1;
			}
			else{
				x = 2*x;
			}
			count++;
		}
		else{
			flag = n - flag;
			count = count + flag;
			break;
		}
		}
		cout<<count<<"\n";
	}
	return 0;
}
