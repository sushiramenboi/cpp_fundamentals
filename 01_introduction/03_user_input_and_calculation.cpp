// Snippet 3: Dog Years Converter
// Concept: User input, arithmetic calculation, and output formatting
// Input: Dog years as an integer (example: 3)
// Output: Estimated human years (example: 21)

#include <iostream>
using namespace std;

int main() {
    int dogYears;
    int humanYears;

    cin >> dogYears;
    humanYears = 7 * dogYears;

    cout << dogYears;
    cout << " dog years is about ";
    cout << humanYears;
    cout << " human years.";
    cout << endl;

    return 0;
}
