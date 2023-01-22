#include <iostream>
using namespace std;

main()
{
    int rows;
    cout << "Enter desired number of rows:";
    cin >> rows;
    for (int count = rows; count <= rows; count--)
    {
        for (int i = 1; i <= count; i++)
        {
            cout << "*";
        }
        cout << endl;
        if (count == 0)
        {
            return 0;
        }
    }
}