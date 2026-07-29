#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    // 6.1: Arrays and indexes
    const int NUM_TEMPERATURES = 4;
    int temperatures[NUM_TEMPERATURES] = {72, 75, 81, 79};

    cout << "First temperature: " << temperatures[0] << endl;
    cout << "Third temperature: " << temperatures[2] << endl;

    temperatures[1] = 76;

    // 6.2: Vectors
    vector<int> scores;

    scores.push_back(88);
    scores.push_back(92);
    scores.push_back(79);

    cout << "Number of scores: " << scores.size() << endl;
    cout << "Value at index 0: " << scores.at(0) << endl;

    // 6.3: Iterating through an array
    cout << endl
         << "Temperatures:" << endl;

    for (int i = 0; i < NUM_TEMPERATURES; ++i)
    {
        cout << temperatures[i] << endl;
    }

    // Iterating through a vector
    cout << endl
         << "Scores:" << endl;

    for (unsigned int i = 0; i < scores.size(); ++i)
    {
        cout << scores.at(i) << endl;
    }

    // 6.4: Running total
    int totalScore = 0;

    for (unsigned int i = 0; i < scores.size(); ++i)
    {
        totalScore = totalScore + scores.at(i);
    }

    cout << "Total score: " << totalScore << endl;

    // Find the highest value
    int highestScore = scores.at(0);

    for (unsigned int i = 1; i < scores.size(); ++i)
    {
        if (scores.at(i) > highestScore)
        {
            highestScore = scores.at(i);
        }
    }

    cout << "Highest score: " << highestScore << endl;

    // Output the vector in reverse
    cout << "Scores in reverse: ";

    for (unsigned int i = scores.size(); i > 0; --i)
    {
        cout << scores.at(i - 1) << " ";
    }

    cout << endl;

    // 6.5: Multiple vectors
    vector<string> studentNames = {"Ana", "Ben", "Chris"};
    vector<int> studentPoints = {95, 87, 91};

    cout << endl
         << "Students and points:" << endl;

    for (unsigned int i = 0; i < studentNames.size(); ++i)
    {
        cout << studentNames.at(i)
             << " earned "
             << studentPoints.at(i)
             << " points." << endl;
    }

    // Search one vector and use the matching index
    string studentToFind = "Ben";

    for (unsigned int i = 0; i < studentNames.size(); ++i)
    {
        if (studentNames.at(i) == studentToFind)
        {
            cout << studentToFind << "'s score is "
                 << studentPoints.at(i) << endl;
        }
    }

    // 6.6: Resize a vector
    vector<int> values = {10, 20};

    values.resize(5);

    cout << endl
         << "After resize(5): ";

    for (unsigned int i = 0; i < values.size(); ++i)
    {
        cout << values.at(i) << " ";
    }

    cout << endl;

    // Assign values to the new elements
    for (unsigned int i = 2; i < values.size(); ++i)
    {
        values.at(i) = (i + 1) * 10;
    }

    cout << "After filling new elements: ";

    for (unsigned int i = 0; i < values.size(); ++i)
    {
        cout << values.at(i) << " ";
    }

    cout << endl;

    // Shrinking removes elements from the end
    values.resize(3);

    cout << "After resize(3): ";

    for (unsigned int i = 0; i < values.size(); ++i)
    {
        cout << values.at(i) << " ";
    }

    cout << endl;

    // 6.7: push_back(), back(), and pop_back()
    vector<string> groceryList;

    groceryList.push_back("oranges");
    groceryList.push_back("apples");
    groceryList.push_back("bread");

    cout << endl;
    cout << "Last item: " << groceryList.back() << endl;

    string removedItem = groceryList.back();
    groceryList.pop_back();

    cout << "Removed item: " << removedItem << endl;
    cout << "New last item: " << groceryList.back() << endl;

    cout << "Removing remaining items: ";

    while (groceryList.size() > 0)
    {
        cout << groceryList.back() << " ";
        groceryList.pop_back();
    }

    cout << endl;

    return 0;
}