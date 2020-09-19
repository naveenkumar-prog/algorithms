#include <iostream>
using namespace std;

// udf where sorting is done

int partition(int arr[],int s,int e)
{
   int i;
   	int pivot = arr[e];
	int pindex=s;
	for(i=s;i<e;i++)
	{
		if(arr[i]<pivot)
		{
			int temp =arr[i];
			arr[i] = arr[pindex];
			arr[pindex] = temp;
			pindex++;
		}
			
	}
	int temp = arr[pindex];
	 arr[pindex] = arr[e];
	 arr[e] = temp;
	return pindex;
}

// It is to complete sorting 

void quicksort(int arr[],int s,int e)
{
	if(s<e)
	{
		int p= partition(arr,s,e);
		
		// recusive calling
		quicksort(arr,s,(p-1));
		quicksort(arr,(s+1),e);
	}
}

// main function

int main() {
	
	int n;
	int arr[100];
	cout << "Enter the size of array:\t";
	cin >>n;
	cout << "Enter " << n <<" elements to sort:\n";
	for(int i=0;i<n;i++)
	{
		cin >> arr[i];
	}
	
	cout << "\nBefore Sort:-\n";
	for(int i=0;i<n;i++)
	{
		cout << arr[i] <<"\n";
	}
	
	quicksort(arr,0,n-1);
	
	cout << "\nAfter Sort The array  is:-\n";
	for(int i=0;i<n;i++)
	{
		cout <<"\n" << arr[i];
	}
	
	
	return 0;
}
