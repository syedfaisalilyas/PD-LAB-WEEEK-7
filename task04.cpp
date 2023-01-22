#include <iostream>
using namespace std;
void result(int number);

main()
{
    int number;
    cout << "Enter number:";
    cin >> number;
    result(number);
}

void result(int number)
{
    for (int i = 1; i <= number; i++)
    {
        if (i % 4 == 0)
        {
            cout << i * 10;
        }
        else
        {
            cout << i;
        }
        cout << ",";
    }
}