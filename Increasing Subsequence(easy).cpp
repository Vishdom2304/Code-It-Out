#include <iostream>
using namespace std;
 
int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int flag = 0;int count = 0;char cv[n+1];
	for(int i=0,j=n-1;i<n,j>=0;){
		if(arr[i]>flag && arr[j]>flag){
			if(arr[i]<arr[j]){
				count++;
				cv[count-1]= 'L';
				flag = arr[i];
				i++;
			}
			else{
				count++;
				cv[count-1] = 'R';
				flag = arr[j];
				j--;
			}
		}
		else if(arr[i]>flag && arr[j]<flag){
			count++;
			cv[count - 1] = 'L';
			flag = arr[i];
			i++;
	}
	else if(arr[i]<flag && arr[j]>flag){
		count++;
		cv[count-1] = 'R';
		flag = arr[j];
		j--;
	}
	else{
		break;
	}
	}
	cout<<count<<"\n";
	for(int i=0;i<count;i++){
		cout<<cv[i];
	}
	return 0;
}
