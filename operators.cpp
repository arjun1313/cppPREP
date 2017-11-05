#include<bits/stdc++.h>
using namespace std;

int main()
{
  int a,b,c;
  cin>>a>>b;
  //bitwise operations
  // and - '&'
  c = a & b;
  cout<<c<<endl;
  // or - '|'
  c = a | b;
  cout<<c<<endl;
  // XOR - '^'
  c = a ^ b;
  cout<<c<<endl;
  // left shift by y bits -> 'x<<y'
  c = a << b;
  cout<<c<<endl;
  // right shift by y bits -> 'x>>y'
  c = a >> b;
  cout<<c<<endl;

  /* if else operation - ((condition) ? 'S' : 'L')
    => if (condition) is true then S else L
  */

  c = (a < b) ? '1' :'0' ;
  cout << (char)c << endl;


  return 0;
}
