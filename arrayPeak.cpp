//An element is called a peak element if its value is not smaller than the value of its adjacent elements(if they exists).
//Given an array arr[] of size N, Return the index of any one of its peak

class Solution
{
    public:
    int peakElement(int arr[], int n)
    {int i;
       // Your code here
       if(arr[0]>arr[1]){
               return 0;
           }
       for(  i=1;i<n-1;i++){
           if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
               return i;
           }}
         if(i==n-1){
           if(arr[i-1]<arr[i]){
               return i;
           }
       
       }
       return 0;
    }
};