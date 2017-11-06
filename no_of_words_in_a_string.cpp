#include<bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  int count=1;
  getline(cin,s);
  cout<<s<<endl;
  for(int i=0;s[i]!='\0';i++)
  {
    if(s[i] == ' ')
    {
      count++;
    }
  }
  cout<<count<<endl;
  return 0;
}
