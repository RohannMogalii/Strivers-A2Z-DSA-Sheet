// https://www.codingninjas.com/studio/problems/nth-fibonacci-number_74156?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

#include<bits/stdc++.h>
using namespace std;
int nth_FiboNum(int n){
  if(n==1 || n==2){
    return 1;
  }
  int a=0,b=1,c;
  for(int i=1;i<=n;i++){
    c=a+b;
    a=b;
    b=c;
  }

  return a;

}
int main()
{
      int n;
      cin>>n;
      
      cout<<nth_FiboNum(n);

      return 0;
}