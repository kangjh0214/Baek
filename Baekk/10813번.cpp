#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a, b, c = 1;
    int arr[101] = { };
    int start, end;

    cin >> a >> b;

    for (int j = 0; j < 101; j++)
    {
        arr[j] = c;
        c++;
    }

    for (int i = 0; i < b; i++)
    {
        cin >> start >> end;
        swap(arr[start - 1], arr[end - 1]);
    }
    for (int k = 0; k < a; k++)
    {
        cout << arr[k] << " ";
    }
    return 0;
}
