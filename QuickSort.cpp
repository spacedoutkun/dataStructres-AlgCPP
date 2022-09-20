//https://www.geeksforgeeks.org/quick-sort/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void swap(int* a,int* b)
{
  int t=*a;
  *a=*b;
  *b=t;
}
int partition(int a[],int low,int high)
{
  int i=low-1;
  int pivot=a[high];
 for(int j=0;j<=high-1;j++)
  {
    if(a[j]<=pivot)
    {
      i++;
      swap(&a[i],&a[j]);
    }
  } 
  swap(a[i+1],a[high]);
  return (i+1);
}
void quickSort(int a[],int low,int high)
{
  if (low<high)
  {
    int pi=partition(a,low,high);
    quickSort(a,low,pi-1);
    quickSort(a,pi+1,high);
  }
}
void printArray(int a[],int n)
{
  int size=n;
  for(int i=0;i<size;i++)
  {
    cout<<a[i]<<" ";
  }
}
int main()
{
  int b[]={2,5,7,13,21,28,31};
  int l;
  l=sizeof(b)/sizeof(b[0]);
  quickSort(b,0,l-1);
  
  printArray(b,l);
  
  return 0;
  
  
}