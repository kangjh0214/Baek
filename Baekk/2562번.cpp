#include <iostream>
using namespace std;

int main()
{
    int a = 9, b;
    int Max = -100;

    int* arr = new int[a];

    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
        if (Max < arr[i])
        {
            Max = arr[i];
            b = i + 1;
        }
    }
    cout << Max << endl;
    cout << b << endl;

}`