//Array insert at specific position
#include <iostream>
using namespace std;
int insertArray(int arr[],int n,int key,int ele,int capacity)
{
  if(n>=capacity)
  {
    return n;
  }
  int i;
  for(i=n-1;i>=key;i--)
  {
    arr[i+1]=arr[i];
  }
  arr[i+1]=ele;
  return n+1;
}
int main() 
{
  int arr[10]={1,2,3,4,5,6,7,8};
  int capacity=sizeof(arr)/sizeof(arr[0]);
  int n=8;
  int key=3,ele=00;
  int N=insertArray(arr,n,key,ele,capacity);
  
  for(int i=0;i<N;i++)
    cout << arr[i]<<" ";
    return 0;
}