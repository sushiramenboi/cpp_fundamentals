#include <iostream>
using namespace std;

class TownNode
{
public:
    TownNode(int neighborsInit = 0, TownNode *nextLoc = nullptr);
    void InsertAfter(TownNode *nodeLoc);
    TownNode *GetNext();
    int GetNodeData();

private:
    int neighborsVal;
    TownNode *nextNodePtr;
};

TownNode::TownNode(int neighborsInit, TownNode *nextLoc)
{
    this->neighborsVal = neighborsInit;
    this->nextNodePtr = nextLoc;
}

void TownNode::InsertAfter(TownNode *nodeLoc)
{
    TownNode *tmpNext = nullptr;

    tmpNext = this->nextNodePtr;
    this->nextNodePtr = nodeLoc;
    nodeLoc->nextNodePtr = tmpNext;
}

TownNode *TownNode::GetNext()
{
    return this->nextNodePtr;
}

int TownNode::GetNodeData()
{
    return this->neighborsVal;
}

int main()
{
    TownNode *headTown = nullptr;
    TownNode *currTown = nullptr;
    TownNode *lastTown = nullptr;
    int count;
    int inputValue;
    int i;

    cin >> count;

    headTown = new TownNode(count);
    lastTown = headTown;

    for (i = 0; i < count; ++i)
    {
        cin >> inputValue;

        currTown = new TownNode(inputValue);

        lastTown->InsertAfter(currTown);
        lastTown = currTown;
    }

    currTown = headTown->GetNext();

    while (currTown != nullptr)
    {
        if (currTown->GetNodeData() > 9)
        {
            cout << currTown->GetNodeData()
                 << " is a large quantity of neighbors." << endl;
        }

        currTown = currTown->GetNext();
    }

    return 0;
}
