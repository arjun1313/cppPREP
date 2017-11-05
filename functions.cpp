#include<bits/stdc++.h>
using namespace std;

int factorial(int i){
  if(i<=1)
  {
    return 1;
  }
  return i*factorial(i-1); // recursion
}

int main()
{
  int x;
  cin>>x;
  cout<< factorial(x)<<endl;
  //cout<<x<<endl;
  return 0;
}
