#include <iostream>
#include <vector>
using namespace std;

// Lesson 6.2: Vector Basics
// Add values to a vector and access them by index.

int main()
{
    vector<int> scores;

    scores.push_back(88);
    scores.push_back(92);
    scores.push_back(79);

    cout << "Number of scores: " << scores.size() << endl;
    cout << "Value at index 0: " << scores.at(0) << endl;
    cout << "Value at index 1: " << scores.at(1) << endl;
    cout << "Value at index 2: " << scores.at(2) << endl;

    return 0;
}
