#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int a, b, c, d;
	int arr[101];


	for (int i = 0; i < 101; i++)
	{
		arr[i] = i + 1;
	}
	cin >> a >> b;

	for (int i = 0; i < b; i++)
	{
		cin >> c >> d;
		reverse(arr + c - 1, arr + d);
	}

	for (int i = 0; i < a; i++)
	{
		cout << arr[i] << " ";
	}
}