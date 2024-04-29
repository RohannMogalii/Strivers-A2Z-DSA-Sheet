// https://www.codingninjas.com/studio/problems/if-else-decision-making_8357235?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf


#include<bits/stdc++.h>
using namespace std;
string compareIfElse(int a, int b) {
	// Write your code here
	if(a>b){
		return "greater";
	}else if(a<b){
		return "smaller";
	}else{
		return "equal";
	}
}
int main(){
    int a,b;
    cin>>a>>b;

    cout<<compareIfElse(a,b);

    return 0;
}