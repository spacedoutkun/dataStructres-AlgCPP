#include<iostream>
#include<bits/stdc++.h>

using namespace std;

/*
In every iteration of the selection sort, 
the minimum element (considering ascending order) 
from the unsorted subarray is picked 
and moved to the beginning of unsorted subarray. 

After every iteration sorted subarray size increase by one 
and unsorted subarray size decrease by one.
*/
void selectionSort(int a[],int n)
{
  int min;
  for(int i=0;i<n;i++)
  {
    min=i;
    for(int j=i+1;j<n;j++)
    {
      if(a[j]<a[min])
      {
        min=j;
      }
      
    }
    if(min!=i)
    {
      swap(a[min],a[i]);
    }
    
  }
}

void printArray(int arr[],int n)
{
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}


int main()
{
  int b[]={64, 25, 12, 22, 11};
  int N=sizeof(b)/sizeof(b[0]);
  
  selectionSort(b,N);
  
  printArray(b,N);
  return 0;
}