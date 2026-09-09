#include <iostream>
#include <iomanip>
using namespace std;

void PrintItemData(double *arrayPtr, int arraySize)
{
    int i;

    if (arrayPtr != nullptr)
    {
        for (i = 0; i < arraySize; ++i)
        {
            cout << fixed << setprecision(1);
            cout << "Temperature " << i + 1 << ": " << arrayPtr[i] << " Celsius" << endl;
        }
    }
}

int main()
{
    double *itemTemperatures = nullptr;
    int numTemperatures;
    int i;

    cin >> numTemperatures;

    itemTemperatures = new double[numTemperatures];

    for (i = 0; i < numTemperatures; ++i)
    {
        cin >> itemTemperatures[i];
    }

    PrintItemData(itemTemperatures, numTemperatures);

    delete[] itemTemperatures;

    return 0;
}