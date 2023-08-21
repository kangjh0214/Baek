#include<iostream>
using namespace std;

int main()
{
	int a, b = 1;

	cin >> a;

	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			cout << "*";
			b++;
			b++;
		}
	}
}