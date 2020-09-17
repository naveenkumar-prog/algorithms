#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
void linearalgorithm(int a[],int n)
{
	int flag=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]==n)
		{
			cout << "The Element's postion  is\t" << i+1;
			flag=1;
		}
	}
	
	if(flag==0)
	{
		cout << "This element is not found";
	}
	
}

int main() {
	int arr[5]={100,200,300,400,500};
	int num;
	cout << "Enter the number which you need to search:\t";
	cin >> num;
	linearalgorithm(arr,num);
	
	return 0;
}
