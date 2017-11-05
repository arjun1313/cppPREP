#include<bits/stdc++.h>
using namespace std;

void showstack(stack <int> s)
{
  while(!s.empty())
  {
    cout<<s.top()<<" ";
    s.pop();
  }
  cout<<endl;
}

// LIFO

int main()
{
  stack <int> s;
  s.push(10);
  s.push(9);
  s.push(8);
  showstack(s);
  s.pop();
  showstack(s);
  return 0;
}
