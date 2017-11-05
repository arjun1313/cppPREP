#include<bits/stdc++.h>
using namespace std;

void display(vector<int> v)
{
  for(int i=0;i<v.size();i++)
  {
    cout<<v[i]<<" ";
  }
  cout<<endl;
}

int main()
{
  vector<int> v;
  // memberfunctions
  v.push_back(24);
  v.push_back(25);
  v.push_back(26);
  display(v);
  cout<<v.front()<<" "<<v.back()<<endl;
  vector<int> v1;
  v1.push_back(14);
  v1.push_back(15);
  v1.push_back(16);
  display(v1);
  v.insert(v.end(),v1.begin(),v1.end());
  display(v);
  sort(v.begin()+2,v.end());
  display(v);
  cout<<v.empty()<<"  "<<v.at(4)<<endl;
  return 0;
}
