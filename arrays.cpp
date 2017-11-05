#include<bits/stdc++.h>
using namespace std;

void display(int* arr, int n)
{
  cout<<"{";
  for(int i=0;i<n;i++)
  {
    cout<< *arr;
    arr = arr+1;
  }
  cout<<"}"<<endl;
  //cout<< *arr<<" "<< *(arr+1)<<endl;
}

int main()
{
  int n;
  int arr[n];
  cin>>n;
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  //cout<<arr<<endl;
  display(arr,n);
  return 0;
}
