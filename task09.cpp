#include <iostream>
using namespace std;

main()
{
    int rows;
    cout << "Enter desired number of rows:";
    cin >> rows;
    for (int count = 1; count <= rows; count++)
    {
        for (int i = 1; i <= count; i++)
        {
            cout << "*";
        }
        for (int j = 1; j <= 2 * (rows - count); j++)
        {
            cout << " ";
        }
        for (int a = 1; a <= count; a++)
        {
            cout << "*";
        }
        cout << endl;
    }
}