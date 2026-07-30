#include <iostream>
#include <vector>
using namespace std;

// Lesson 6.3: Iterating Through Arrays and Vectors
// Use a loop and an index to visit every stored value.

int main()
{
    const int NUM_TEMPERATURES = 4;
    int temperatures[NUM_TEMPERATURES] = {72, 75, 81, 79};
    vector<int> scores = {88, 92, 79};

    cout << "Temperatures:" << endl;

    for (int i = 0; i < NUM_TEMPERATURES; ++i)
    {
        cout << temperatures[i] << endl;
    }

    cout << endl
         << "Scores:" << endl;

    for (unsigned int i = 0; i < scores.size(); ++i)
    {
        cout << scores.at(i) << endl;
    }

    return 0;
}
