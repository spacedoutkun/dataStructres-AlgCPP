#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

// Bucket sort for numbers having integer part
void bucketSort(vector<double> &arr, int noOfBuckets)
{
  double maxElement=*max_element(arr.begin(),arr.end());
  double minElement=*min_element(arr.begin(),arr.end());
  
  double range=(maxElement-minElement )/noOfBuckets;
  
  //create empty buckets
  vector<vector<double>> temp;
  
  for(int i=0;i<noOfBuckets;i++)
  {
    temp.push_back(vector<double>());
  }
  
  
  //scatter
  for(int i=0;i<arr.size();i++)
  {
    double diff=(arr[i]-minElement)/range - int((arr[i]-minElement)/range);
    
    
    if(diff==0 && arr[i]!=minElement)
    {  
      temp[int((arr[i]-minElement)/range) - 1].push_back(arr[i]);
    }
    else
    {
      temp[int((arr[i]-minElement)/range)].push_back(arr[i]);
    }
    
  }
  //sort
  for(int i=0;i<temp.size();i++)
  {
    if(!temp[i].empty())
    {
      sort(temp[i].begin(),temp[i].end());
    }
  }
  
  
  
  //append
  /*
  The auto keyword can also be used to traverse through a vector.

  auto must be given a variable to store the accessed element 
  and the sequence that needs to be iterated.
  
  
  */
  int k=0;

  for(vector<double>& lst : temp)//here instead of auto ,vector is used
  {
    if(!lst.empty())
    {
      for(double i:lst)//here instead of auto ,double is used
      {
        arr[k]=i;
        k++;
      }
    }
  }
  

}


//Driver code
int main()
{
vector<double> arr = { 9.8, 0.6, 10.1, 1.9, 3.07,
						3.04, 5.0, 8.0, 4.8, 7.68 };
  int no_of_buckets=5;
  bucketSort(arr,no_of_buckets);
  for(double i:arr)
  {
    cout<<i<<" ";
  }
cout << endl;
return 0;
}
