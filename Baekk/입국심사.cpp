#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

int main()
{

}

long long twotamsec(int n, vector<int>times)
{
	long long people;
	sort(times.begin(), times.end());
	long long left, right, mid;
	left = times.front(), right = times.back();
	while (left <= right)
	{
		mid = 0;
		people = 0;
		mid = (left + right) / 2;
		for (int i = 0; i < times.size(); i++)
		{
			people = mid / times[i];
		}
		if (n <= people) //n = 6 pe = 7
		{
			right = mid - 1;
		}
		else
		{
			left = mid + 1;
		}
	}
	return left;
}