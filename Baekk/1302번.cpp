#include<iostream>
#include<map>
#include<string>
using namespace std;

int main()
{
	map<string, int> book;

	int a;
	cin >> a;

	for (int i = 0; i < a; i++)
	{
		string b;
		cin >> b;
		book[b]++;
	}

	int max = 0;
	string ans;
	for (auto iter : book)
	{
		if (iter.second > max)
		{
			max = iter.second;
			ans = iter.first;
		}
	}
	cout << ans;
}