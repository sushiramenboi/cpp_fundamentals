#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int num1, num2, num3, num4;

    cin >> num1 >> num2 >> num3 >> num4;

    int productInt = num1 * num2 * num3 * num4;
    int averageInt = (num1 + num2 + num3 + num4) / 4;

    double productDouble = static_cast<double>(num1) * num2 * num3 * num4;
    double averageDouble = static_cast<double>(num1 + num2 + num3 + num4) / 4.0;

    cout << productInt << " " << averageInt << endl;

    cout << fixed << setprecision(3);
    cout << productDouble << " " << averageDouble << endl;

    return 0;
}