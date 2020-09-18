#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int counting(int a[],int s, int r)
{
	int count_array[r];
	int output_array[s];
	int i;
	for( i=0;i<=r;i++)
	{
		count_array[i]=0;
	}
	for( i=0;i<=s;i++)
	{
		++count_array[a[i]];
	}
	for(i=0;i<=r;i++)
	{
		count_array[i]=count_array[i]+count_array[i-1];
	}
	for( i=0;i<=s;i++)
	{
		output_array[--count_array[a[i]]]=a[i];
	}
	for(i=0;i<=s;i++)
	{
		a[i]=output_array[i];
	}
	for(i=0;i<=s;i++)
	{
		cout << "\n " << a[i];
	}
	
	
	
}


int main() {
	
	int arr[10];
	int range =10;
	int size;
	cout << "Enter the size of array within the range of 10 :\t";
	cin >> size;
	cout << "Enter the elements within the range in any order\n";
	for(int i=0;i<=size;i++)
	{
		cin >> arr[i];
	}
	
	cout <<"Before Sorting :\n";
	for(int i=0;i<=size;i++)
	{
		cout << "\n" << arr[i];
	}
	
	cout << "\nAfter Sorting :\n";
	counting(arr,size,range);
	
	return 0;
}
