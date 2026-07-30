#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Lesson 6.7: back() and pop_back()
// Read and remove values from the end of a vector.

int main()
{
    vector<string> groceryList;

    groceryList.push_back("oranges");
    groceryList.push_back("apples");
    groceryList.push_back("bread");

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
