#include <bits/stdc++.h>
using namespace std;
int gow(char a){
	if(a == '+' || a =='-'){
		return 1;
	}
	else if(a == '*' || a== '/'){
		return 2;
	}
	else if(a == '^'){
		return 3;
	}
	else{
		return -1;
	}
}
int main() {
	string str;
	cin>>str;
	stack<char> s;
	for(int i=0;i<str.length();i++){
		if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')){
			cout<<str[i];
		}
		else{
			if(s.empty()){
				s.push(str[i]);
			}
			else{
				if(s.top() == '('){
					s.push(str[i]);
				}
				else if(gow(str[i])>gow(s.top()) || str[i] == '('){
					s.push(str[i]);
				}
				else if(gow(str[i])<=gow(s.top()) && str[i]!=')'){
					int flag = 0;
					while(!s.empty()){
						if(s.top() == '('){
							s.push(str[i]);
							flag = 1;
							break;
						}
						else if(gow(str[i])<=gow(s.top())){
							cout<<s.top();
							s.pop();
						}
						else{
							break;
						}
					}
					if(flag == 0){
					s.push(str[i]);
					}
				}
				else if(str[i] == ')'){
					while(s.top()!='('){
						cout<<s.top();
						s.pop();
					}
					s.pop();
				}
			}
		}
	}
	while(!s.empty()){
		cout<<s.top();
		s.pop();
	}
	return 0;
}
