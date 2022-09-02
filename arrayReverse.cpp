#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int,5> a={3,6,2,8,3};
    cout<<a.size();
  /*  int temp;
    for(int i=0;i<a.size();i++)
    {
        for(int j=1;j,a.size();j++)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=a[i];

        }
    }
     for(int i=0;i<a.size();i++)
    {
        cout<<a[i];
    } */
    return 0;
}
