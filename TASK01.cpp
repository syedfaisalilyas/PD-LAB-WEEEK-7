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
        cout << endl;
    }
}