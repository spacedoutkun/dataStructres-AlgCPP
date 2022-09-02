#include <iostream>
using namespace std;
int main()
{   //declaring and initializing an array
    /*
    int arr[]={10,20,30,40,50};
    int a[5];
    a[0]=1;
    a[2]=50;
    a[3/2]=70;
    a[3]=a[0];

    cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<" "<<a[3]<<" ";
    */
   
   //index out of bounds
   /*
    cout<<"---------"<<"\n";
    int b[3];
    cout<<b[4]<<" ";
    cout<<b[-2]<<" ";
    */

   //traversing and showing address in array are contagious 
   /*
   int arr[5]={10,20,30,40};
   int i;
   for(i=0;i<5;i++)
   {
    cout<<"Address of arr["<<i<<"] is "<<&arr[i]<<"\n"
    ;
    cout<<"Element"<<arr[i]<<"\n"<<endl;
   }
   */
   
   int a[10],index;
   for (index=0;index<=9;index++)
   {
       cin>>a[index];
       
   }
   for(index=0;index<=9;index++)
   {
       cout<<"Elements are"<<"\n"<<a[index]<<"\n";
   }
   
   


    return 0;
}