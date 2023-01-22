#include <iostream>
using namespace std;

main()
{
    int integers, number, p1 = 0, p2 = 0, p3 = 0;
    cout << "Enter integers:";
    cin >> integers;

    for (int i = 1; i <= integers; i++)
    {
        cout << "Enter numbers:";
        cin >> number;
        if (number % 2 == 0)
        {
            p1 += 1;
        }
        if (number % 3 == 0)
        {
            p2 += 1;
        }
        if (number % 4 == 0)
        {
            p3 += 1;
        }
    }
    p2 = (p2 * 100) / integers;
    p3 = (p3 * 100) / integers;
    p1 = (p1 * 100) / integers;
    cout << "p1:" << p1;
    cout << "p2:" << p2;
    cout << "p3:" << p3;
}