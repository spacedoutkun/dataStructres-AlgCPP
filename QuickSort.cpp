
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
 for(int j=low;j<=high-1;j++)
  {
    if(a[j]<=pivot)
    {
      i++;
      swap(&a[i],&a[j]);
    }
  } 
  cout<<" before swap "<<a[i+1]<<endl;
  swap(a[i+1],a[high]);
  cout<<" after swap "<<a[i+1]<<endl;
  return (i+1);
}
void quickSort(int a[],int low,int high,int c)
{
  if (low<high)
  {
    c++;
    cout<<c<<" quick count "<<endl;
    cout<<" Low "<<low<<" High "<<high<<endl;
    int pi=partition(a,low,high);
    cout<<" pi "<<pi<<" Low "<<low<<" High "<<high<<endl;
    cout<<endl;
    quickSort(a,low,pi-1,c);
    cout<<endl<<"-----";
    quickSort(a,pi+1,high,c);
    
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
  int count=0;
  int b[]={30,50,40,10,70};
  int l;
  l=sizeof(b)/sizeof(b[0]);
  quickSort(b,0,l-1,count);
  
  printArray(b,l);
  
  return 0;
  
  
}
