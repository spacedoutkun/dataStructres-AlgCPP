//Array insert 
#include <iostream>
using namespace std;
int insertArray(int arr[],int n,int ele,int capacity)
{
  if(n>=capacity)
  {
    return n;
  }
  int i;
  for(i=n-1;(i>=0 && arr[i]>ele);i--)
  {
    arr[i+1]=arr[i];
  }
  arr[i+1]=ele;
  return n+1;
}
int main() 
{
  int arr[10]={1,2,3,4,5,7,8,9};
  int capacity=sizeof(arr)/sizeof(arr[0]);
  int n=8;
  int ele=6;
  cout<<"Before Insert ";
  for(int i=0;i<n;i++)
    cout << arr[i]<<" ";
  int N=insertArray(arr,n,ele,capacity);
  cout<<endl<<"After Insert ";
  for(int i=0;i<N;i++)
    cout << arr[i]<<" ";
    return 0;
}