#include <iostream>
using namespace std;
void upperfunc(int rows);
void lowerfunc(int rows);
main()
{
    int rows;
    cout << "Enter desired number of rows:";
    cin >> rows;
    upperfunc(rows);
    lowerfunc(rows);
}

void upperfunc(int rows)
{

    for (int i = 1; i <= rows; i++)
    {
        for (int space = rows; space > i; space--)
        {
            cout << " ";
        }
        for (int c = 1; c <= i; c++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void lowerfunc(int rows)
{
    for (int i = rows; i >= 1; i--)
    {
        for (int space = rows; space > i; space--)
        {
            cout << " ";
        }
        for (int c = 1; c <= i; c++)
        {
            cout << "*";
        }
        cout << endl;
        ;
    }
}