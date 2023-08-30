#include <iostream>
using namespace std;

int main()
{
    int num, money;
    int Quarter = 0, Dime = 0, Nickel = 0, Penny = 0;

    cin >> num;

    for (int i = 0; i < num; i++)
    {
        cin >> money;
        while (money >= 25)
        {
            Quarter++;
            money -= 25;
        }
        while (money >= 10)
        {
            Dime++;
            money -= 10;
        }
        while (money >= 5)
        {
            Nickel++;
            money -= 5;
        }
        while (money >= 1)
        {
            Penny++;
            money -= 1;
        }
        cout << Quarter << " " << Dime << " " << Nickel << " " << Penny << endl;
        Quarter = 0, Dime = 0, Nickel = 0, Penny = 0;
    }
}