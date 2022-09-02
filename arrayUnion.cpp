/******************************************************************************

Union of array

*******************************************************************************/
#include <bits/stdc++.h>

using namespace std;
// return whether first element is greater than the second  

void findUnion(int a[],int b[],int n,int m)
{
    int i=0;
    int j=0;
    sort(a,a+n);
    sort(b,b+m);
    while( i<n && j<m)
    {
        if (a[i]<b[j])
        {
            cout<<a[i++]<<" ";
         
        }
        else if(b[j]<a[i])
        {
            cout<<b[j++]<<" ";
        }
        else 
        {
            cout<<b[j++]<<" ";
            i++;
        }
        
    }
    while(i<n)
    {
        cout<<a[i++]<<" ";
    }
    while(j<m)
    {
        cout<<b[j++]<<" ";
    }
}

int main ()
{
    int n,m;
   int a[]={1, 2, 4, 5, 6 };
    int b[]={2, 3, 5, 7};
    n=sizeof(a)/sizeof(a[0]);
    m=sizeof(b)/sizeof(b[0]);
    cout<<endl;
    cout<<n<<endl;
    cout<<m<<endl;
    findUnion(a,b,n,m);
     
    return 0;
    
}
