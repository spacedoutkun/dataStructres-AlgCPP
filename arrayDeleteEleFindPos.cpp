//Array delete element by finding its position
#include <iostream>
using namespace std;
int binarySearch(int arr[],int low,int high,int ele)
{
  if(high<low)
  {
    return -1;
  }
  int mid=(low+high)/2;
  if(ele==arr[mid])
  {
    return mid;
  }
  if(ele>arr[mid])
  {
    return binarySearch(arr,mid+1,high,ele);
  }
  else
  {
    return binarySearch(arr,0,mid,ele);
  }
}

int deleteArray(int arr[],int n,int pos,int capacity)
{
  
  if(n>=capacity)
  {
    return n;
  }
  int i;
  for(i=pos;i<n-1;i++)
  {
    arr[i]=arr[i+1];
  }
  return n-1;
}
int main() 
{
  int arr[10]={1,2,3,4,5,7,8,9};
  int capacity=sizeof(arr)/sizeof(arr[0]);
  int n=8;
  int ele=5;
  
  int pos=binarySearch(arr,0,n-1,ele);
  cout<<pos<<endl;
  
  cout<<"Before Delete ";
  for(int i=0;i<n;i++)
    cout << arr[i]<<" ";
    
  int N=deleteArray(arr,n,pos,capacity);
  cout<<endl<<"After Delete ";
  for(int i=0;i<N;i++)
    cout << arr[i]<<" ";
    return 0;
}