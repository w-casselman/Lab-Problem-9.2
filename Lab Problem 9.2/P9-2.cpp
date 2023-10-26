// P9-2
// Wesley Casselman
// October 26th of 2023

#include <iostream>

using namespace std;

int main(void)
{
	const int SIZE = 6;

	int arr[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		cout << "Enter integer #" << i + 1 << ": ";
		cin >> arr[i];
	}

	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << " ";
	}

	cout << endl;

	return 0;
}