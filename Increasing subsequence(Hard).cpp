//codeforces problem (greedy)
//problem number C2(hard version) 
#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int counter = 0;
	vector<char> v1;
	vector<char> v2;
	int flag = 0;int count = 0;vector<char> v;
	for(int i=0,j=n-1;i<n,j>=0;){
		if(arr[i]>flag && arr[j]>flag){
			if(arr[i]<arr[j]){
				count++;
			v.push_back('L');
				flag = arr[i];
				i++;
			}
			else if(arr[j]<arr[i]){
				count++;
				v.push_back('R');
				flag = arr[j];
				j--;
			}
			else{
				int countl =0 ;
				int flag1 = flag;
				while(arr[i]>flag1){
					countl++;
					flag1 = arr[i];
					v1.push_back('L');
					if(i<n-1){
					i++;
					}
				}
				int countr = 0;
				int flag2 = flag;
				while(arr[j]>flag2){
					countr++;
					flag2 = arr[j];
					v2.push_back('R');
					if(j>0){
					j--;
					}
				}
				if(countl>countr){
					count = count + countl;
					counter = 1;
				}
				else{
					count = count + countr;
					counter = 2;
				}
			flag = max(flag1, flag2);
			}
		}
		else if(arr[i]>flag && arr[j]<=flag){
			count++;
			v.push_back('L');
			flag = arr[i];
			i++;
	}
	else if(arr[i]<=flag && arr[j]>flag){
		count++;
		v.push_back('R');
		flag = arr[j];
		j--;
	}
	else{
		break;
	}
	}
	cout<<count<<"\n";
	for(int i=0;i<v.size();i++){
		cout<<v[i];
	}
	if(counter ==1){
		for(int i=0;i<v1.size();i++){
			cout<<v1[i];
		}
	}
		else if(counter == 2){
			for(int i = 0;i<v2.size();i++){
				cout<<v2[i];
			}
		}
	return 0;
}
