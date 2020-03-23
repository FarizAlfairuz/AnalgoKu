#include <iostream>
#include<chrono>
using namespace std;
 

void Merge(int *a, int low, int high, int mid)
{
	
	int i, j, k, temp[high-low+1];
	i = low;
	k = 0;
	j = mid + 1;
 
	
	while (i <= mid && j <= high)
	{
		if (a[i] < a[j])
		{
			temp[k] = a[i];
			k++;
			i++;
		}
		else
		{
			temp[k] = a[j];
			k++;
			j++;
		}
	}
 
	
	while (i <= mid)
	{
		temp[k] = a[i];
		k++;
		i++;
	}
 
	
	while (j <= high)
	{
		temp[k] = a[j];
		k++;
		j++;
	}
 
 
	
	for (i = low; i <= high; i++)
	{
		a[i] = temp[i-low];
	}
}
 

void MergeSort(int *a, int low, int high)
{
	int mid;
	if (low < high)
	{
		mid=(low+high)/2;
		
		MergeSort(a, low, mid);
		MergeSort(a, mid+1, high);
 
		
		Merge(a, low, high, mid);
	}
}
 
int main()
{
    
	int n, i;
	cout<<"\nEnter the number of data element to be sorted: ";
	cin>>n;
 
	int arr[n];
	for(i = 0; i < n; i++)
	{
		cout<<"Enter element "<<i+1<<": ";
		cin>>arr[i];
	}
    auto start = chrono::steady_clock::now();
	MergeSort(arr, 0, n-1);
    auto end = chrono::steady_clock::now();

	
	cout<<"\nSorted Data ";
	for (i = 0; i < n; i++)
        cout<<" - "<<arr[i];
    cout << endl;
    cout << "Elapsed time in nanoseconds : " 
		<< chrono::duration_cast<chrono::nanoseconds>(end - start).count()
		<< " ns" << endl;

	cout << "Elapsed time in microseconds : " 
		<< chrono::duration_cast<chrono::microseconds>(end - start).count()
		<< " µs" << endl;

	cout << "Elapsed time in milliseconds : " 
		<< chrono::duration_cast<chrono::milliseconds>(end - start).count()
		<< " ms" << endl;

	cout << "Elapsed time in seconds : " 
		<< chrono::duration_cast<chrono::seconds>(end - start).count()
		<< " sec";
	return 0;
}