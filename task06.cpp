#include <iostream>
using namespace std;

int main()
{
    int period, treated = 0, untreated = 0, doctors = 7;
    cin >> period;

    for (int i = 1; i <= period; i++)
    {
        int patients;
        cin >> patients;
        if (patients > doctors)
        {
            treated += doctors;
            untreated += patients - doctors;
        }
        else
        {
            treated += patients;
        }

        if (i % 3 == 0)
        {
            if (treated < untreated)
            {
                doctors++;
            }
        }
    }

    cout << "Treated patients: " << treated << "." << endl;
    cout << "Untreated patients: " << untreated << "." << endl;

    return 0;
}