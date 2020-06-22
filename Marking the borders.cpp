//codechef problem on no. of required integers that lie in a range (i.e. a, a+b, a+b+a, a+b+a+b......)
//problem link : - https://www.codechef.com/problems/COCR104
#include<iostream>
using namespace std;
int main(){
int t,a,b,l,r;
cin>>t;
while(t--){
long long int  a,b,l,r,c,d,x;
		cin >> a >> b >> l >> r;
        c = l/(a+b);
        d = r/(a+b);
        x = (d-c)*2;
        if(r%(a+b)>=a) x++;
        if(l%(a+b)==0 && l!=0) x++;
        if(l%(a+b)>a) x--;

        cout << x << endl;
}
return 0;
}
