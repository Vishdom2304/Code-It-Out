//hackerrank problem
// Question link = https://www.hackerrank.com/challenges/merge-list/problem
// Number of ways to merge two links , retaining order of each lists
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,m;
    cin>>t;
    while(t--){
        cin>>n>>m;
        int c[m+1]={0};
        c[0] = 1;
        for(int i=1;i<=n+m;i++){

            for(int j =min(i, m);j>0;j--){
                c[j] = (c[j]%1000000007+c[j-1]%1000000007)%1000000007;
            }
        }
        cout<<c[m]<<"\n";
    }
}
