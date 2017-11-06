#include<bits/stdc++.h>
using namespace std;

int main()
{
  vector <string> v;
  string s,s1;
  getline(cin,s);
  int k =0;
  for(int i=0;s[i] !='\0';i++)
  {
    if(s[i] == ' ')
    {
      s1 = s.substr(k,i-k);
      //cout<<s1<<endl;
      v.push_back(s1);
      k=i+1;
      //cout<<k<<" "<<i<<endl;
    }
  }
  s1 = s.substr(k,s.length()-k);
  v.push_back(s1);
  for(int i=0;i<v.size();i++)
  {
    cout<<v[i]<<endl;
  }

  return 0;
}
