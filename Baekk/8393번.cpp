#include <iostream>
using namespace std;

int main()
{
    int num, b = 0;

    cin >> num;

    for (int i = 0; i <= num; i++)
    {
        b += i;
    }
    cout << b;
}