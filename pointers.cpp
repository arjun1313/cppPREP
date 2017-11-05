#include<bits/stdc++.h>
using namespace std;

int main()
{
  /*
   & - determines the address of a variable
   * - accesses the value at the address
  */
  int a;
  cin>>a;
  int* b;
  b = &a;
  cout<< *b <<" "<<b<<" "<<a<<" "<< &a <<endl;
  int arr[4] = {1,2,3,4};
  int *p;
  p = &arr[0];
  for(int i =0;i<4;i++)
  {
    cout<< *p<<"  "<< p <<endl;
    p++;
  }
  return 0;
}
