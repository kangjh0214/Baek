#include <iostream>
#include <string>
using namespace std;
int main()
{
	int a;


	cin >> a;
	for (int k = 0; k < a; k++)
	{
		int r;
		string p;
		cin >> r >> p;
		for (int i = 0; i < p.length(); i++)
		{
			for (int j = 0; j < r; j++)
			{
				cout << p[i];
			}
		}
		cout << endl;
	}
}