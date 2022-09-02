//{ Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;
 int main()
 {      int arr[]={7,10,4,3,20,7,15};
        int k=3;
        int n=sizeof(arr)/sizeof(arr[0]);
        
        sort(arr,arr+n);
        cout<<arr[k-1]<<endl;
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==arr[k-1])
            {
                count++;
            }
        }
        cout<<count<<endl;
        
        
        //code here
}



