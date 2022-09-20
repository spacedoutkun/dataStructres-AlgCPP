#include <bits/stdc++.h>

using namespace std;

int min(int x, int y)
{
  return(x<y) ?x :y;
}
int fib(int a[],int k,int n)
{
  int fib_small,fib_mid,fibmax;
  fib_small=0;
  fib_mid=1;
  fibmax=fib_mid+fib_small;
  
  while(fibmax<n)
  {
    fib_small=fib_mid;
    fib_mid=fibmax;
    fibmax=fib_mid+fib_small;
  }
  
  
  int offset=-1;
  
  while(fibmax>1)
  {
    int i=min(offset+fib_mid,n-1);
    
    if(a[i]<k)
    {
      fibmax=fib_mid;
      fib_mid=fib_small;
      fib_small=fibmax-fib_mid;
      offset=i;
    }
    else if(a[i]>k)
    {
      fibmax=fib_small;
      fib_mid=fib_mid-fibmax;
      fib_small=fibmax-fib_mid;
    }
    else
    {
      return i;
    }
  }
  if(fib_mid && a[offset+1]==k)
    return offset+1;
  return -1;
}

int main()
{
  int b[]={2,5,7,13,21,28,31};
  int l;
  l=sizeof(b)/sizeof(b[0]);
  int q=7;
  int result=fib(b,q,l);
  if(result>=0)
  {
    cout<<"found at "<<result<<endl;
  }
  else
  {
    cout<<"not found "<<endl;
  }
  return 0;
  
  
}