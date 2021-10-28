// Programmer : Zahra Yaghoubi

#include <iostream>
using namespace std;

#define MAX 100

int main()
{
	
	int arr[MAX], total, i, j, index;
	cout << "The Total Number is : ";
	cin >> total;
	
	if (total<0 || total>MAX)
	{
		cout << "valid range!!!" << endl;
		return -1;
	}
	
	for (i = 0; i < total; i++)
	{
		cout << "Plese enter element [" << i + 1 << "] ";
		cin >> arr[i];
	}
	
	cout << "The unsorted array elements are : " << endl;
	for (i = 0; i < total; i++)
		cout << arr[i] << "\t";
	cout << endl;
	
	for (i = 0; i < total; i++)
	{
		for (j = i + 1; j < total; j++)
		{
			if (arr[i] > arr[j])
			{
				index = arr[i];
				arr[i] = arr[j];
				arr[j] = index;
			}
		}
	}
	
	cout << "sorted array elements are : " << endl;
	for (i = 0; i < total; i++)
		cout << arr[i] << "\t";
	cout << endl;
	return 0;
}