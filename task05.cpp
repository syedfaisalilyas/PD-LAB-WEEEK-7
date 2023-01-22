#include <iostream>
using namespace std;
int Dots(int number);

int main()
{
    int number;
    cout << "Enter number:";
    cin >> number;
    int dots = Dots(number);
    cout << dots;
    return 0;
}

int Dots(int number)
{

    int dots = 0;
    for (int i = 1; i <= number; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            dots++;
        }
    }
    return dots;
}