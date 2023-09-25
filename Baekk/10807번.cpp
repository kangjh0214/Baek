#include <iostream>
using namespace std;

int main()
{
    int a, b, c = 0;
    int arr[101];

    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    cin >> b;
    for (int i = 0; i < a; i++)
    {
        if (arr[i] == b)
        {
            c++;
        }
    }
    cout << c << endl;
}