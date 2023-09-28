#include <iostream>
using namespace std;

int main()
{
    int a, b;
    int arr[101] = { 0, };
    int start, end, ball;

    cin >> a >> b;


    for (int i = 0; i < b; i++)
    {
        cin >> start >> end >> ball;
        for (int j = start; j <= end; j++)
        {
            arr[j] = ball;
        }
    }
    for (int k = 1; k <= a; k++)
    {
        cout << arr[k] << " ";
    }
    return 0;
}
