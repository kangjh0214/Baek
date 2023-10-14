#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cin >> a >> b;
    cout << a + b << endl;

    while (a != 0 && b != 0)
    {
        cin >> a >> b;
        if (a == 0 && b == 0)
        {
            break;
        }
        cout << a + b << endl;
    }
}