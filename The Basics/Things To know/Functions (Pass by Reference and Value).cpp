// https://www.codingninjas.com/studio/problems/fa-1-ece_4606261?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

#include <bits/stdc++.h>
using namespace std;
int Maximum(int x, int y)
{
	if(x>y){
		return x;
	}else if(x<y){
		return y;
	}
}
void Swap(int &x, int &y)
{
	int temp = x;
	x=y;
	y=temp;
}
int main()
{
	int test, a, b, r;
	cin >> test;
	cin >> a >> b;
	switch (test)
	{
	case 1:
		r = Maximum(a, b);
		cout << r;
		break;
	case 2:
		Swap(a, b);
		cout << a << " " << b;
		break;
	default:
		cout << "Invalid test option";
	}
	return 0;
}