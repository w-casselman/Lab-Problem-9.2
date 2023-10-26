// P9-2
// Wesley Casselman
// October 26th of 2023

#include <iostream>

using namespace std;

bool isSortedIncreasing(int array[], int size);
bool isSortedDecreasing(int array[], int size);

int main(void)
{
	const int SIZE = 6;

	int arr[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		cout << "Enter integer #" << i + 1 << ": ";
		cin >> arr[i];
	}

	isSortedIncreasing(arr, SIZE) ? cout << "The data are increasing." << endl : cout << "The data are not increasing." << endl;
	isSortedDecreasing(arr, SIZE) ? cout << "The data are decreasing." << endl : cout << "The data are not decreasing." << endl;

	return 0;
}

bool isSortedIncreasing(int array[], int size)
{
	for (int i = 1; i < size; i++)
	{
		if (array[i - 1] > array[i])
		{
			return false;
		}
	}
	return true;
}

bool isSortedDecreasing(int array[], int size)
{
	for (int i = 1; i < size; i++)
	{
		if (array[i - 1] < array[i])
		{
			return false;
		}
	}
	return true;
}