// https://www.codingninjas.com/studio/problems/data-type_8357232?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

#include<bits/stdc++.h>
using namespace std;
int dataTypes(string type) {
	// Write your code here
	if(type == "Integer"){
		return sizeof(int);
	}else if(type == "Long"){
		return sizeof(long);
	}else if(type == "Float"){
		return sizeof(float);
	}else if(type == "Double"){
		return sizeof(double);
	}else if(type == "Character"){
		return sizeof(char);
	}
}
int main(){
    string type;
    cin>>type;

    cout<<dataTypes(type);
}