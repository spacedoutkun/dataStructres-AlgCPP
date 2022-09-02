/*
program to add two arrays having ascending elements in a third array in ascending order
*/

#include <iostream>

using namespace std;

int main()
{
    int a[4],b[4],c[10],i,j,k;
    for(i=0;i<4;i++)
    {
         cout<<"Enter elements";
         cin>>a[i];
    }
    for(j=0;j<4;j++)
    {
         cout<<"Enter elements";
         cin>>b[j];

    }
    i=j=k=0;
    while(i<4&&j<4)
    {
        if(a[i]<b[j])
        {

            c[k]=a[i];
            i++;
            k++;
        }
        else
        {
            c[k]=b[j];
            j++;
            k++;
        }
    }
    while(i<4)
    {
        c[k]=a[i];
            i++;
            k++;
    }
     while(j<4)
    {
        c[k]=b[j];
            j++;
            k++;
    }
    for(i=0;i<k;i++)
    {
        cout<<"c[k]="<<c[i];
    }






}
