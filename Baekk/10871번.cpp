#include <iostream>
using namespace std;

int main()
{
    int a, b;
    int arr[10000];

    cin >> a >> b;

    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < a; i++)
    {
        if (arr[i] < b)
        {
            cout << arr[i] << " ";
        }
    }
}