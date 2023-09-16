#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int a = 42, b = 0;
	int arr[10] = { };

	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
		arr[i] = arr[i] % 42;
	}
	sort(arr, arr + 10);

	for (int i = 0; i < 10; i++)
	{
		if (arr[i] != arr[i + 1])
		{
			b++;
		}
	}

	cout << b;
	return 0;
}