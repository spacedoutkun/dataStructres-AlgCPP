#include <bits/stdc++.h>
using namespace std;

int main()
{
   int arr[]={3,46,7,9,2};

    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<sizeof(arr)<<endl;
    cout<<arr<<endl;
    cout<<arr+n<<endl;

    int x=sizeof(arr[1]);
    cout<<x<<endl;
    sort(arr,arr+n);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
  
}