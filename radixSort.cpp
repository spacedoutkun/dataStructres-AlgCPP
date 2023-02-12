// C++ implementation of Radix Sort

#include <iostream>
using namespace std;

// A utility function to get maximum value in arr[]
	/* finds 'max digi't for taking every digit of the max digit in consideration 
	eg, it considers every digit in no. 802 in this case in consecutive passes
	*/
int getMax(int arr[], int n)
{
	int mx = arr[0];
	for (int i = 1; i < n; i++)
  {		if (arr[i] > mx)
    {
			  mx = arr[i];
    }
	}
	cout<<"mx "<<mx<<endl;
	return mx;
}

// A function to do counting sort of arr[] according to
// the digit represented by exp.
void countSort(int arr[], int n, int exp)
{
	int output[n]; // output array
	int i, count[10] = { 0 };
	
	cout<<"---outer loop---"<<endl;

	// Store count of specific digit's occurrences in count[]
	/*
	only count of specific digit is stored at that digit's specific index in 'count array'
	eg. here count of last digit 6 of elements is '2'
	so count of 2 is stored in count array at postition '6'
	*/
	for (i = 0; i < n; i++)
	{
	  cout<<"====inner loop 1==="<<endl;
	  
		count[(arr[i] / exp) % 10]++;
		
		cout<<"arr["<<i<<"]= "<<arr[i]<<"/"<< exp<<endl;\
		cout<<"count["<<(arr[i] / exp) % 10<<"]"<<endl;

		cout<<"count= "<<count[(arr[i] / exp) % 10]<<endl;
		
		cout<<"===inner loop 1 end==="<<endl<<endl;
  }
  cout<<endl;
  for (i = 0; i < 9; i++)
	{
	  cout<<count[i]<<" ";
	}
	cout<<endl<<endl;

	// Change count[i] so that count[i] now contains actual
	// position of this digit in output[]
	/*
	elements in 'count array' are used as index for 'output array'
	where 'output array' is used for storing elements from unsorted original array
	
	but is some digit's coutn is only 1 at the specific element index then it might cause problems
	for this reason element from count array is added with next element of coutn array
	eg. count of digit 6 stored at index 6 is only 1
	but is second largest digitin the coutn array and is that value is used as index
	then digit six might be placed at a before smaller digits which is wrong
	cuz of which addition with previous elementis done
	*/
	for (i = 1; i < 10; i++)
	{
	  cout<<"+++inner loop 2+++"<<endl;
	  cout<<"i "<<i<<endl;
	  cout<<"count["<<i<<"] before "<<count[i]<<endl;
	  cout<<"count["<<i<<"-1] before "<<count[i-1]<<endl;
		count[i] += count[i - 1];
		cout<<"count["<<i<<"] after "<<count[i]<<endl;
		cout<<"+++inner loop 2+++"<<endl<<endl;
  }
  
	
  cout<<endl;
  for (i = 0; i < 9; i++)
	{
	  cout<<count[i]<<" ";
	}
	cout<<endl<<endl;
	// Build the output array
	/*
	output array stores the unsorted array elements using count array elements index
	first finds digit of the element from unsorted array being considered 
	and then finds the element of coutn array at the index of of the digit
	if digit is bigger then the element at count array is also bigger 
	by which we can store the digit at its correct position
	*/
	for (i = n - 1; i >= 0; i--) 
	{
	  cout<<"///inner loop 3///"<<endl;
	  cout<<count[(arr[i] / exp) % 10]<<endl;
	 	cout<<output[count[(arr[i] / exp) % 10]-1]<<endl;
    cout<<arr[i]<<endl;
		output[count[(arr[i] / exp) % 10] - 1] = arr[i];
		cout<<output[count[(arr[i] / exp) % 10]-1]<<endl;
		count[(arr[i] / exp) % 10]--;
		
		cout<<"///inner loop 3///"<<endl;
	}
	cout<<endl;
  for (i = 0; i < 9; i++)
	{
	  cout<<output[i]<<" ";
	}
	cout<<endl<<endl;

	// Copy the output array to arr[], so that arr[] now
	// contains sorted numbers according to current digit
	for (i = 0; i < n; i++)
	{
		arr[i] = output[i];
	}
  cout<<"****outer loop end******"<<endl;
}

// The main function to that sorts arr[] of size n using
// Radix Sort
void radixsort(int arr[], int n)
{
	// Find the maximum number to know number of digits
	int m = getMax(arr, n);

	// Do counting sort for every digit. Note that instead
	// of passing digit number, exp is passed. exp is 10^i
	// where i is current digit number
	
	/*
	radix sort works by ofirst sorting digits by their amx position 
	eg. here it is 100th position
	it takes the last digit in consideration and sorts according to last digits
	*/
	for (int exp = 1; m / exp > 0; exp *= 10)
		countSort(arr, n, exp);
}

// A utility function to print an array
void print(int arr[], int n)
{
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
}

// Driver Code
int main()
{
	int arr[] = { 170, 45, 75, 90, 802, 24, 2, 66 };
	int n = sizeof(arr) / sizeof(arr[0]);
	
	// Function Call
	radixsort(arr, n);
	print(arr, n);
	return 0;
}
