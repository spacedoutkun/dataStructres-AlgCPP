// C++ implementation of Shell Sort
#include <iostream>
using namespace std;

/* function to sort arr using shellSort */
int shellSort(int a[], int n)
{
	// Start with a big gap, then reduce the gap
	for (int gap = n/2; gap > 0; gap /= 2)
	{
		// Do a gapped insertion sort for this gap size.
		// The first gap elements a[0..gap-1] are already in gapped order
		// keep adding one more element until the entire array is
		// gap sorted
		cout<<endl<<"--==---"<<endl<<"gap "<<gap<<endl;
		for (int i = gap; i < n; i += 1)
		{
			// add a[i] to the elements that have been gap sorted
			// save a[i] in temp and make a hole at position i
			cout<<"//////"<<endl<<"i "<<i<<endl;
			int temp = a[i];
      cout<<"temp "<<temp<<endl;
			// shift earlier gap-sorted elements up until the correct
			// location for a[i] is found
			int j;			
      
			for (j = i; j >= gap && a[j - gap] > temp; j -= gap)
			  {
			    cout<<endl<<"--for loop executed--"<<endl;
			    cout<<"a["<<j<<"] in for loop before "<<a[j]<<endl;
			    cout<<"j in "<<j<<endl;
				  a[j] = a[j - gap];
				  cout<<"gap in for loop "<<gap<<endl;
			   cout<<"a["<<j<<"] in for loop "<<a[j]<<endl;
			   cout<<"----"<<endl;
			    for (int x=0; x<5; x++)
			    {
			        cout <<"*************"<< a[x] << " "<<endl;
			    }
		          
			  }
			 cout<<endl<<"a["<<j<<"] before temp in "<<a[j]<<endl;
			// put temp (the original a[i]) in its correct location
			a[j] = temp;
			cout<<"a["<<j<<"] after temp in "<<a[j]<<endl;
						    for (int x=0; x<5; x++)
			    {
			        cout <<"+++++++++++++"<< a[x] << " "<<endl;
			    }
		          
		}
	}
	return 0;
}

void printArray(int arr[], int n)
{
	for (int i=0; i<n; i++)
		cout << arr[i] << " ";
}

int main()
{
	int arr[] = {12, 34, 54, 2, 3}, i;
	int n = sizeof(arr)/sizeof(arr[0]);

	cout << "Array before sorting: \n";
	printArray(arr, n);

	shellSort(arr, n);

	cout << "\nArray after sorting: \n";
	printArray(arr, n);

	return 0;
}
