#include <iostream>
using namespace std;

int main()
{
    int one, two, three;

    cin >> one >> two >> three;

    if (one == two && two == three)
    {
        cout << 10000 + one * 1000;
    }
    else if (one == two || one == three)
    {
        cout << 1000 + one * 100;
    }
    else if (two == three)
    {
        cout << 1000 + three * 100;
    }
    else
    {
        cout << max(max(one, two), three) * 100;
    }
}