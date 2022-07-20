

#include <iostream>
using namespace std;
int main()
{
	int arr[10];
	arr[0] = rand() % 1000 + 1;
	int max = arr[0];
	cout << "Array: " << arr[0];
	for (int i = 1; i < sizeof(arr)/sizeof(int); i++)
	{
		arr[i] = rand() % 1000 + 1;
		if (arr[i] > max)
		{
			max = arr[i];
		}
		cout << ", " << arr[i];
	}
	cout << endl;
	cout << "Largest Number in Array is " << max;
	exit(0);
}

