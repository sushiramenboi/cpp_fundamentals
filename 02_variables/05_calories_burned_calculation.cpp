#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    double age;
    double weight;
    double heartRate;
    double timeMinutes;
    double calories;

    cin >> age;
    cin >> weight;
    cin >> heartRate;
    cin >> timeMinutes;

    calories = ((((age * 0.2757) + (weight * 0.03295) + (heartRate * 1.0781) - 75.4991) * timeMinutes) / 8.368);

    cout << "Calories: " << fixed << setprecision(2) << calories << " calories" << endl;

    return 0;
}
