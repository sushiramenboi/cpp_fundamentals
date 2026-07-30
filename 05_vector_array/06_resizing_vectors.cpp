#include <iostream>
#include <vector>
using namespace std;

// Lesson 6.6: Resizing Vectors
// Grow a vector, fill its new elements, and then shrink it.

int main()
{
    vector<int> values = {10, 20};

    values.resize(5);

    cout << "After resize(5): ";

    for (unsigned int i = 0; i < values.size(); ++i)
    {
        cout << values.at(i) << " ";
    }

    cout << endl;

    // The original values are at indexes 0 and 1,
    // so begin filling new elements at index 2.
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

    // Shrinking removes elements from the end.
    values.resize(3);

    cout << "After resize(3): ";

    for (unsigned int i = 0; i < values.size(); ++i)
    {
        cout << values.at(i) << " ";
    }

    cout << endl;

    return 0;
}
