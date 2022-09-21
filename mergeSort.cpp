#include<iostream>
#include<bits/stdc++.h>

using namespace std;

// Merges two subarrays of array[].
// First subarray is arr[begin..mid]
// Second subarray is arr[mid+1..end]
void merge(int a[],int const left,int const mid,int const right)
{
  auto const size1=mid-left+1;
  auto const size2=right-mid;
 
 // Create temp arrays 
  auto *leftArray=new int[size1];
  auto *rightArray=new int[size2];
  
  
  // Copy data to temp arrays leftArray[] and rightArray[]
  for(auto l=0;l<size1;l++)
  {
    leftArray[l]=a[left+l];
  }
  for(auto m=0;m<size2;m++)
  {
    rightArray[m]=a[mid+1+m];
  }
  
  
  auto i=0,j=0;//indexes of left and right arrays
  int k=left;//index of main to be sorted array
  
  
  // Merge the temp arrays back into array in sorted way
  while(i<size1 && j<size2)
  {
    if(leftArray[i]<=rightArray[j])
    {
      a[k]=leftArray[i];
      i++;
    }
    else
    {
      a[k]=rightArray[j];
      j++;
      
    }
    k++;
  }
  
  
  //insert remaining elements 
  while(i<size1)
  {
    a[k]=leftArray[i];
    i++;
    k++;
  }
  
  while(j<size2)
  {
    a[k]=rightArray[j];
    j++;
    k++;
  }
  
  //delete dynamically allocated memory(by new operator) manually
  delete[] leftArray;
  delete[] rightArray;
}


void mergeSort(int a[],int begin,int end)
{
  if(begin>=end)
    return;
  
  auto mid=begin+(end-begin)/2;

  mergeSort(a,begin,mid);
  mergeSort(a,mid+1,end);
  merge(a,begin,mid,end);
}
void printArray(int a[],int size)
{
  for(int i=0;i<size;i++)
  {
    cout<<a[i]<<" ";
  }
  
}
int main()
{
  int b[]={1,5,90,78,23,80,100,203};
  auto n=sizeof(b)/sizeof(b[0]);
  
  mergeSort(b,0,n-1);
  
  printArray(b,n);
  return 0;
}