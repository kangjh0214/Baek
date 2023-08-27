#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	float sub, temp = 0, temp2 = 0;
	float a[1001], b[1001];

	cin >> sub;

	for (int i = 0; i < sub; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < sub; i++)
	{
		if (a[i] >= temp)
		{
			temp = a[i];
		}
	}


	for (int i = 0; i < sub; i++)
	{
		b[i] = a[i] / temp * 100;
	}

	for (int i = 0; i < sub; i++)
	{
		temp2 += b[i];
	}
	cout << temp2 / sub;
}