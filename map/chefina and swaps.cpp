// codechef problem on use of map to find min. cost of swaping elements of two arrays so that the two arrays become equal.
// problem link : - https://www.codechef.com/JULY20B/problems/CHFNSWPS/

#include <bits/stdc++.h>
using namespace std;
int main(){
	int t,n,a,b;
	cin>>t;
	while(t--){
		cin>>n;
		int arr[n];
		int brr[n];
		map<int, int> ma;
		map<int, int> mb;
		map<int, int> mc;
		for(int i = 0;i<n;i++){
			cin>>arr[i];
			ma[arr[i]]++;
			mc[arr[i]]++;
		}
		for(int i = 0; i<n; i++){
			cin>>brr[i];
			mb[brr[i]]++;
		}
		sort(arr, arr + n);
		sort(brr, brr + n);
		vector<int> v;
		vector<int> w;
		int flag = 0;
		int count = 0;
		for(int i = 0; i<n; i++){
			if(ma[arr[i]]!=-1){
			if(binary_search(brr, brr+n, arr[i])){
				if(ma[arr[i]]!=mb[arr[i]]){
					long long int z = ma[arr[i]] + mb[arr[i]];
					if(z%2==0){
						long long int p = z/2;
						long long int e = p - ma[arr[i]];
						if(e<0){
							while(e!=0){
								v.push_back(arr[i]);
								e++;
								count = 1;
								ma[arr[i]] = -1;
							}
						}
					}
					else{
						flag = 1;
						break;
					}
				}
			}
			else{
				if(ma[arr[i]]%2==0){
					long long int e = ma[arr[i]]/2;
					while(e!=0){
						v.push_back(arr[i]);
						e--;
						count = 1;
						ma[arr[i]] = -1;
					}
				}
				else{
					flag = 1;
					break;
				}
			}
			}
		}
		if(flag == 1){
			cout<<"-1"<<"\n";
			continue;
		}
		for(int i = 0; i<n; i++){
			if(mb[brr[i]]!=-2){
			if(binary_search(arr, arr+n, brr[i])){
				if(mc[brr[i]]!=mb[brr[i]]){
					long long int z = mc[brr[i]] + mb[brr[i]];
					if(z%2 == 0){
						long long int p = z/2;
						long long int e = p - mb[brr[i]];
						if(e < 0){
							while(e!=0){
								w.push_back(brr[i]);
								e++;
								count = 1;
								mb[brr[i]] = -2;
							}
						}
					}
					else{
						flag = 1;
						break;
					}
				}
			}
			else{
				if(mb[brr[i]]%2==0){
					long long int e = mb[brr[i]]/2;
					while(e!=0){
						w.push_back(brr[i]);
						e--;
						count = 1;
						mb[brr[i]] = -2;
					}
				}
				else{
					flag = 1;
					break;
				}
			}
		}
		}
		if(flag == 1){
			cout<<"-1"<<"\n";
			continue;
		}
	    if(count == 0){
			cout<<"0"<<"\n";
			continue;
		}
		int d = min(arr[0], brr[0]);
		long long int sum = 0;
		for(int i = 0, j = w.size() - 1; i<v.size(), j>=0; i++, j--){
			 int c = min(v[i], w[j]);
			 if(d<c){
			 	if(2*d<c){
			 		sum = sum + 2*d;
			 	}
			 	else{
			 		sum = sum + c;
			 	}
			 }
			 else{
			 	sum = sum + c;
			 }
		}
		cout<<sum<<"\n";
	}
}
