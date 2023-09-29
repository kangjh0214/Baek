#include<iostream>
using namespace std;

int main()
{
	int a = 0;
	int small = 1000001;
	int big = -1000001;

	cin >> a;
	int* arr = new int[a];

	for (int i = 0; i < a; i++)
	{
		cin >> arr[i];
		if (big < arr[i])
		{
			big = arr[i];
		}
		if (small > arr[i])
		{
			small = arr[i];
		}
	}

	cout << small << " " << big;
}