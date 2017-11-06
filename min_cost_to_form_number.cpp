/*
form number X from 0
condition 1 : adding 1 costs A
condition 2 : doubling costs B
find minimum cost
*/
#include<bits/stdc++.h>
using namespace std;

int max(int a,int b)
{
  if(a>=b)
  {
    return b;
  }
  else
   return a;
}

int main()
{
  int A,X,B;
  cin>>A>>X>>B;
  int N = 256;
  int c[N];
  c[0]=0;
  c[1]=A;
  for(int i=2;i<N;i++)
  {
    if(i%2 ==0)
    {
      c[i] = max(c[i-1]+A,c[i/2]+B);
    }
    else
     c[i] = c[i-1] +A;
    cout<<"for "<<i<<" :"<<c[i]<<endl;
    if(i == X) break;
  }
  return 0;
}
