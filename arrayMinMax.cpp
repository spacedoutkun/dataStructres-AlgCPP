//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<long long, long long> getMinMax(long long a[], int n) ;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        pair<ll, ll> pp = getMinMax(a, n);

        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}
// } Driver Code Ends

/*Given an array A of size N of integers. Your task is to find the minimum and maximum elements in the array.*/


pair<long long, long long> getMinMax(long long a[], int n) {
    long long int small,big;
    int i=0;
    if (a[i]<a[i+1])
    {
        small=a[0];
    }
    else
    {
        small=a[i+1];
    }
     if (a[i]>a[i+1])
    {
        big=a[i];
    }
    else
    {
        big=a[i+1];
    }
    for( i=0;i<n;i++)
    {
        if(a[i]<small)
        {
            small=a[i];
        }
         if(a[i]>big)
        {
            big=a[i];
        }
    }
   
   pair<ll,ll> pp;
   pp.first =small;
   pp.second =big;
   return pp;
       
   
    
}