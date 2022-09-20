#include <iostream>
using namespace std;

int bSearch(int a[],int sm,int n,int k)
{
  if(sm<n)
  {
    int mid=sm+(n-1)/2;
   if(k==a[mid])
      {
        return mid;  
      }
      else if(k<a[mid])
      {
        return bSearch(a,sm,mid-1,k);
      }
      else 
      {
        return bSearch(a,mid+1,n,k);
      }
  }
  
      return -1;
}

int main(void) 
{
    int b[]= { 2, 3, 4, 10, 40 , 41 };
   
    int s,x=41;
    s=sizeof(b)/sizeof(b[0]);
    
     
    int result=bSearch(b,0,s-1,x) ;
    if(result==-1)
    {
      cout<<"not present"<<endl;
    }
    else
    {
      cout<<"present at "<<result;
    }

    return 0;
}