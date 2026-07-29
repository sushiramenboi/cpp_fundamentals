#include <iostream>
using namespace std;

int main()
{
    int numRows;
    int numColumns;
    int currentRow;
    int currentColumn;
    int currentColumnInteger;
    char currentRowLetter;

    cin >> numRows;
    cin >> numColumns;

    currentRow = 0;
    currentRowLetter = 'A';

    while (currentRow < numRows)
    {
        currentColumn = 0;
        currentColumnInteger = 1;

        while (currentColumn < numColumns)
        {
            cout << currentRowLetter << currentColumnInteger << " ";

            ++currentColumn;
            ++currentColumnInteger;
        }

        cout << endl;

        ++currentRow;
        ++currentRowLetter;
    }

    return 0;
}
