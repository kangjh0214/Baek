#include<iostream>
using namespace std;

int main()
{
	int a, b = 1, d = 1;

	cin >> a;

	int c = a - 1;

	for (int i = 0; i < a; i++)
	{
		for (int k = 0; k < c; k++)
		{
			cout << " ";
		}
		for (int j = 0; j < b; j++)
		{
			cout << "*";
		}
		c--;
		b += 2;
		cout << endl;

	}
	b -= 2;
	b -= 2;
	for (int i = 0; i < a; i++)
	{
		for (int k = 0; k < d; k++)
		{
			cout << " ";
		}
		for (int o = 0; o < b; o++)
		{
			cout << "*";
		}
		d++;
		b -= 2;
		cout << endl;
	}
}