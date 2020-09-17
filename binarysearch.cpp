#include<iostream>
using namespace std;
int binarysearch(int arr[],int left, int right, int num)
{ 
    while(left<=right)
	{
	   int mid = left+(right-left)/2;
	   if(arr[mid]==num){
	      return mid;
	      break;
	    }
		else if(arr[mid]<num)
		{
		   left=mid+1;
		   }
		else
		   {
		    right=mid-1;
		    }
		}
	
	
  return 1;
	
}
int main()
{
	int a[10];
	int n;
	int output;
	
	cout << "Enter 10 integers in asccending order:\n";
	for(int i=0;i<10;i++)
	{
		cin>>a[i];
	}
	
	cout << "Enter the number you need to find position:\t";
	cin >> n;
	output = binarysearch(a,0,9,n);
	
	if(output == 1)
	{
		cout << "This number is not present here";
	}
	else
	{
		cout << "This number's position is" << output+1;
	}
	
	return 0;

}
