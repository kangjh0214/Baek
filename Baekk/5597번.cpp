#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int a = 1, b = 1, c;
	int arr[31] = { };

	for (int i = 0; i < 30; i++)
	{
		arr[i] = i + 1;
	}

	for (int i = 0; i < 28; i++)
	{
		cin >> c;
		arr[c - 1] = 0;
	}
	for (int i = 0; i < 30; i++)
	{
		if (arr[i] != 0)
		{
			cout << arr[i] << endl;
		}
	}
	return 0;
}