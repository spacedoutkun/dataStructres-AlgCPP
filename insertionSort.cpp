#include<iostream>
#include<bits/stdc++.h>

using namespace std;

//This algorithm sorts an array of items by repeatedly 
//taking an element from the unsorted portion of the array 
//and inserting it into its correct position in the sorted portion of the array.
void insertionSort(int a[],int n)
{
  for(int i=0;i<n;i++)
  {
    int j=i;
    while(j>0 && a[j-1]>a[j])
    {
      swap(a[j-1],a[j]);
      j=j-1;
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
  int b[]={12, 11, 13, 5, 6};
  int N=sizeof(b)/sizeof(b[0]);
  
  insertionSort(b,N);
  
  printArray(b,N);
  return 0;
}