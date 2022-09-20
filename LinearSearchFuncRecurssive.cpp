/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
#include<iostream>

using namespace std;

int LinearSearch(int arr[],int size,int key)
{
    if(size==0)
    {
        return -1;
    }
    if(arr[size-1]==key)
    {
        return size-1;
    }
    else
    {
        int result=LinearSearch(arr,size-1,key);
        return result;
    }
}

int main()
{
    int arr[]={2,65,13};
    int result=LinearSearch(arr,3,0);
    if (result==-1)
        cout<<"Element not found";
    else
        cout<<"Element found at "<<result;

    return 0;
}
