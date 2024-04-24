// https://www.codingninjas.com/studio/problems/find-character-case_58513?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf


#include<bits/stdc++.h>
using namespace std;

void solve(char ch){
	if(ch>='A' && ch<='Z'){
		cout<<1;
	}else if(ch>='a' && ch<='z'){
		cout<<0;
	}else{
		cout<<-1;
	}
}
int main(){
	char ch;
	cin>>ch;

	solve(ch);

	return 0;
}