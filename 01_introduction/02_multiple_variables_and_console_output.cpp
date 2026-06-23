// Snippet 2: Driving Age Example
// Concept: Multiple variables and sequential console output
// Input: None
// Output: Prints a sentence using preset values

#include <iostream>
using namespace std;

int main() {
    int drivingYear;
    int drivingAge;
    int numStates;

    drivingYear = 2014;
    drivingAge = 18;
    numStates = 10;

    cout << "In ";
    cout << drivingYear;
    cout << ", the driving age is ";
    cout << drivingAge;
    cout << ".";
    cout << endl;
    cout << numStates;
    cout << " states have exceptions.";
    cout << endl;

    return 0;
}
