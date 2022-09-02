/******************************************************************************

sort till some value then sort in desc
*******************************************************************************/
#include <bits/stdc++.h>

using namespace std;
// return whether first element is greater than the second  

int main(){
    int a[]={1,2,4,5,6,7,8,9};
    int k;
    
    cout<<endl;
    int n=sizeof(a)/sizeof(a[0]);
        random_shuffle(a,a+n);
        
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    sort(a,a+n);
    cout<<"enter k"<<endl;
    cin>>k;
    
    sort(a+k,a+n,greater<int>());
    
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}