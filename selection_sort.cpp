#include<iostream>
using namespace std;

void sorted_array(int arr[] )
{
	for(int i=0;i<4;i++){
		int min = i;
		
		for(int j=i+1;j<5;j++)
		{
			if(arr[j]<arr[i])
			{
				min = j;
			}
		}
		
		if(min!=i)
		{
			int temp = arr[min];
			arr[min] = arr[i];
			arr[i] = temp;
		}
	}
}

int main()
{
	int arr[5];
	cout << "Enter 5 integers in random order:-\n";
	for(int i=0;i<5;i++)
	{
		cin >> arr[i];
	}
	
	cout << "\nunsorted array";
	for(int i=0;i<5;i++)
	{
		cout << "\n" << arr[i];
		
	}
	
	sorted_array(arr);

	
	cout << "\nsorted array";
	for(int i=0;i<5;i++)
	{
		cout <<"\n" << arr[i];
		
	}
	
	
	return 0;
}
