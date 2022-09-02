#include <iostream>
using namespace std;
int main()
{   
    cout<<"Two dimesional Array";
    
    int a[10][4];
    for(int i=0;i<=9;i++)
    {
        for(int j=0;j<=3;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<=9;i++)
    {
        for(int j=0;j<=3;j++)
        {
            cout<<"Element at a["<<i<<"]"<<"["<<j<<"] is "<<a[i][j]<<"\n";
        }
    }

    return 0;
}