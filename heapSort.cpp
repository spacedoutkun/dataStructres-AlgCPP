#include<iostream>
#include<bits/stdc++.h>

using namespace std;

/*
The heap sort algorithm consists of two phases.
In the first phase the array is converted into a max heap. 
And in the second phase the highest element is removed (i.e., the one at the tree root) 
and the remaining elements are used to create a new max heap.
*/
void heapify(int A[],int s,int i)
{
  int l,r,largest;
  largest=i;
  l=2*i+1;
  r=2*i+2;
  
  if(l<s &&A[l]>A[largest])
  {
    largest=l;
  }
  if(r<s && A[r]>A[largest])
  {
    largest=r;
  }
  
  if(largest!=i)
  {
    swap(A[i],A[largest]);
    
    heapify(A,s,i);
  }
}
void heapSort(int a[],int n)
{
  for(int i=n/2-1;i>=0;i--)
  {
    heapify(a,n,i);
  }
  for(int i=n-1;i>=0;i--)
  {
    swap(a[0],a[i]);
    heapify(a,i,0);
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
  int b[]={12, 11, 13, 5, 6, 7 };
  int N=sizeof(b)/sizeof(b[0]);
  
  heapSort(b,N);
  
  printArray(b,N);
  return 0;
}