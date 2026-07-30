#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Lesson 6.5: Multiple Vectors
// Matching indexes connect related values in separate vectors.

int main()
{
    vector<string> studentNames = {"Ana", "Ben", "Chris"};
    vector<int> studentPoints = {95, 87, 91};

    cout << "Students and points:" << endl;

    for (unsigned int i = 0; i < studentNames.size(); ++i)
    {
        cout << studentNames.at(i)
             << " earned "
             << studentPoints.at(i)
             << " points." << endl;
    }

    string studentToFind = "Ben";

    for (unsigned int i = 0; i < studentNames.size(); ++i)
    {
        if (studentNames.at(i) == studentToFind)
        {
            cout << studentToFind << "'s score is "
                 << studentPoints.at(i) << endl;
        }
    }

    return 0;
}
