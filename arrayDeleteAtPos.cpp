//Array delete at specific position
#include <iostream>
using namespace std;
int deleteArray(int arr[],int n,int pos,int capacity)
{
  if(n>=capacity)
  {
    return n;
  }
  int i;
  for(i=pos;i<n-1;i++)
  {
    arr[i]=arr[i-1];
  }
  return n-1;
}
int main() 
{
  int arr[10]={1,2,3,4,5,7,8,9};
  int capacity=sizeof(arr)/sizeof(arr[0]);
  int n=8;
  int pos=6;
  cout<<"Before Delete ";
  for(int i=0;i<n;i++)
    cout << arr[i]<<" ";
  int N=deleteArray(arr,n,pos,capacity);
  cout<<endl<<"After Delete ";
  for(int i=0;i<N;i++)
    cout << arr[i]<<" ";
    return 0;
}