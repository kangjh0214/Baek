#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	string a = "abcdefghijklmnopqrstuvwxyz";
	string b;

	cin >> b;
	for (int i = 0; i < a.length(); i++)
	{
		cout << (int)b.find(a[i]) << " ";
	}
}