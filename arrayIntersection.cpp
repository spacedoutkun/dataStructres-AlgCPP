/******************************************************************************

Intersction of array

*******************************************************************************/
#include <bits/stdc++.h>

using namespace std;
// return whether first element is greater than the second  

void findUnion(int a[],int b[],int n,int m)
{
    int i,j;
    sort(a,a+n);
    sort(b,b+m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if (a[i]==b[j])
            {
                cout<<b[j]<<" ";
               
            }
        }
        
    }
}

int main ()
{
    int n,m;
   int a[]={1, 2, 4, 5, 6 ,7};
    int b[]={2, 3, 5, 7};
    n=sizeof(a)/sizeof(a[0]);
    m=sizeof(b)/sizeof(b[0]);
    cout<<endl;
    cout<<n<<endl;
    cout<<m<<endl;
    findUnion(a,b,n,m);
     
    return 0;
    
}
