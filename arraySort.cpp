#include <iostream>

using namespace std;

int main()
{
    int a[]={1,5,3,7,9,0,5,3,2,5};
    int temp;
    for(int i=0;i<10;i++)
    {
        for(int j=i+1;j<10;j++)
        {/*
            if(a[j]<a[i])
               {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;

               }







               */

            if(a[i]>a[j])
               {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;

               }

        }
                cout<<a[i];


    }
    for(int i=0;i<10;i++)
    {
        cout<<a[i];
    }
    return 0;

}
