// https://www.codingninjas.com/studio/problems/sum-of-even-odd_624650?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

#include<iostream>
using namespace std;

void sumofEvenOdd(int n){

	int sumE = 0,oddE=0;
	while(n){
		int rem = n%10;
		if(rem%2 == 0){
			sumE += rem;
		}else{
			oddE += rem;
		}
		n=n/10;
	}

	cout<<sumE<<" "<<oddE;
}
int main() {
	// Write your code here
	int n;
	cin>>n;

	sumofEvenOdd(n);
	
	return 0;
}
