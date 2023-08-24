#include<iostream>
using namespace std;

int main()
{
    int a, b, c, temp;

    while (true)
    {
        cin >> a >> b >> c;
        
        if (a == 0)
        {
            break;
        }

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

        if (a >= b + c)
        {
            cout << "Invalid" << endl;
        }
        else if (a == b && b == c)
        {
            cout << "Equilateral" << endl;
        }
        else if (a == b || b == c || c == a)
        {
            cout << "Isosceles" << endl;
        }
        else if (a != b || b != c || c != a)
        {
            cout << "Scalene" << endl;
        }
    }
}