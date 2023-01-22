#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int count;
    cin >> count;

    double minibus_weight = 0;
    double truck_weight = 0;
    double train_weight = 0;
    double total_weight = 0;
    double total_cost = 0;

    for (int i = 0; i < count; i++)
    {
        int weight;
        cin >> weight;

        if (weight <= 3)
        {
            minibus_weight += weight;
            total_cost += weight * 200;
        }
        else if (weight <= 11)
        {
            truck_weight += weight;
            total_cost += weight * 175;
        }
        else
        {
            train_weight += weight;
            total_cost += weight * 120;
        }
        total_weight += weight;
    }

    double avg_cost = total_cost / total_weight;
    double minibus_percent = (minibus_weight / total_weight) * 100;
    double truck_percent = (truck_weight / total_weight) * 100;
    double train_percent = (train_weight / total_weight) * 100;

    cout << avg_cost << endl;
    cout << minibus_percent << endl;
    cout << truck_percent << endl;
    cout << train_percent << endl;
}