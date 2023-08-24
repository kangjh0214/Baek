#include<iostream>
using namespace std;

int main()
{
    int a, b, c, temp;

    cin >> a >> b >> c;

    if (b > a)
    {
        temp = b;
        b = a;
        a = temp;
    }
    if (c > a)
    {
        temp = c;
        c = a;
        a = temp;
    }
    
    if (a < b + c)
    {
        cout << a + b + c;
    }
    else
    {
        a = b + c - 1;
        cout << a + b + c;
    }
}