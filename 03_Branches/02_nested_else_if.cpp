#include <iostream>
using namespace std;

int main()
{
    int numHams;
    int myMoney;
    int totalCost;

    cin >> numHams;
    cin >> myMoney;

    if (numHams >= 4)
    {

        totalCost = numHams * 5;

        if (totalCost <= myMoney)
        {
            cout << "Successful purchase" << endl;
        }

        else
        {
            cout << "Not all hams purchased" << endl;
        }
    }
    else
    {
        cout << "Please purchase at least 4 hams" << endl;
    }

    return 0;
}