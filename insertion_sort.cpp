#include<iostream>
using namespace std;


void insertsort(int a[], int n)
{
	for(int i=1;i<n;i++)
	{
		int key=a[i];
		int j=i-1;
		
		while(j>=0 && a[j]>key)
		{
			a[j+1] = a[j];
			j = j-1;
		}
	
		a[j+1] = key;
	}
	
}
int main()
{
	
	int arr[100];
	int n;
	
	cout << "How many numbers you need to add in array:-\t";
	cin >> n;
	
	cout << "Enter the numbers here!!\n";
	for(int i=0;i<n;i++)
	{
		cin >> arr[i];
	}
	
	
	cout << "Before Sorting Your array is!!\n";
	for(int i=0;i<n;i++)
	{
		cout << arr[i] << "\n";
	}
	
	insertsort(arr,n);
	
	
	cout << "This is Your Sorted array!!\n";
	for(int i=0;i<n;i++)
	{
		cout << arr[i] << "\n";
	}
	
	
}
