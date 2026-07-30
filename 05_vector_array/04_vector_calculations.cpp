#include <iostream>
#include <vector>
using namespace std;

// Lesson 6.4: Vector Calculations
// Use loops to find a running total and the highest value.

int main()
{
    vector<int> scores = {88, 92, 79};
    int totalScore = 0;

    for (unsigned int i = 0; i < scores.size(); ++i)
    {
        totalScore = totalScore + scores.at(i);
    }

    cout << "Total score: " << totalScore << endl;

    int highestScore = scores.at(0);

    for (unsigned int i = 1; i < scores.size(); ++i)
    {
        if (scores.at(i) > highestScore)
        {
            highestScore = scores.at(i);
        }
    }

    cout << "Highest score: " << highestScore << endl;

    return 0;
}
