#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<set>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	set<string, greater<string>>people;
	string name, state;
	int num;

	cin >> num;
	for (int i = 0; i < num; i++) 
	{
		cin >> name >> state;
		if (state == "enter")
		{
			people.insert(name);
		}
		else 
		{
			people.erase(name);
		}
	}

	for (auto ngm : people) 
	{
		cout << ngm << "\n";
	}
}