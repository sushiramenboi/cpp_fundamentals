#include <iostream>
using namespace std;

// Lesson 6.1: Arrays and Indexes
// Store multiple values in an array and access them by index.

int main()
{
    const int NUM_TEMPERATURES = 4;
    int temperatures[NUM_TEMPERATURES] = {72, 75, 81, 79};

    cout << "First temperature: " << temperatures[0] << endl;
    cout << "Third temperature: " << temperatures[2] << endl;

    // Change the value stored at index 1.
    temperatures[1] = 76;

    cout << "Updated second temperature: " << temperatures[1] << endl;

    return 0;
}
