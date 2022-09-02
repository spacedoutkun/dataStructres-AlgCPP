#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={3,5,7,9,3};
    
    cout<<"before";
    for_each(v.begin(),v.end(),[](int x)
    {
        cout<<x<<endl;
    });
    sort(v.begin(),v.end());
    cout<<"after sort";
    for_each(v.begin(),v.end(),[](int x){
        cout<<x<<endl;
    });
    
    return 0;
}