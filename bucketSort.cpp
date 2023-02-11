
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;


void bucketSort(float a[], int n)
{
  vector<float> b[n];
  //scatter array elements to bucket
  for(int i=0;i<n;i++)
  {
    int bucket_index=n*a[i];
    b[bucket_index].push_back(a[i]);
  }
  
  //sort each bucket
  for(int i=0;i<n;i++)
  {
    sort(b[i].begin(),b[i].end());
  }
  
  
  //gather all elements in array
  int index=0;
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<b[i].size();j++)
    {
      a[index++]=b[i][j];
    }
  }
}

/* Driver program to test above function */
int main()
{
	float a[]
		= { 0.897, 0.565, 0.656, 0.1234, 0.665, 0.3434 };
	int n = sizeof(a) / sizeof(a[0]);
	bucketSort(a, n);

	cout << "Sorted array is \n";
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	return 0;
}
