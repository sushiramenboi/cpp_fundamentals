#include <iostream>
using namespace std;

class Activity
{
public:
    Activity(int stepsVal = 0, int secondsVal = 0);
    ~Activity();
    void SetSteps(int activitySteps);
    void SetSeconds(int activitySeconds);

private:
    int steps;
    int seconds;
};

Activity::Activity(int stepsVal, int secondsVal)
{
    steps = stepsVal;
    seconds = secondsVal;
}

Activity::~Activity()
{
    cout << "Destructor called on Activity (" << steps << ", " << seconds << ")" << endl;
}

void Activity::SetSteps(int activitySteps)
{
    steps = activitySteps;
}

void Activity::SetSeconds(int activitySeconds)
{
    seconds = activitySeconds;
}

class ActivityTracker
{
public:
    ActivityTracker();
    ~ActivityTracker();
    void SetCapacity(int capacityVal);
    void AddActivity(int activitySteps, int activitySeconds);

private:
    int activitiesCapacity;
    int activitiesSize;
    Activity *activities;
};

ActivityTracker::ActivityTracker()
{
    activitiesSize = 0;
    activitiesCapacity = 0;
    activities = nullptr;
}

ActivityTracker::~ActivityTracker()
{
    cout << "Destructor called on ActivityTracker" << endl;
    delete[] activities;
}

void ActivityTracker::SetCapacity(int capacityVal)
{
    activitiesCapacity = capacityVal;
    activities = new Activity[activitiesCapacity];
    cout << "Allocated activities with capacity " << activitiesCapacity << endl;
}

void ActivityTracker::AddActivity(int activitySteps, int activitySeconds)
{
    activities[activitiesSize].SetSteps(activitySteps);
    activities[activitiesSize].SetSeconds(activitySeconds);
    activitiesSize += 1;
}

void RunTracker(int capacityVal)
{
    ActivityTracker tracker;
    int activitySteps;
    int activitySeconds;
    int i;

    tracker.SetCapacity(capacityVal);

    for (i = 0; i < capacityVal; ++i)
    {
        cin >> activitySteps;
        cin >> activitySeconds;
        tracker.AddActivity(activitySteps, activitySeconds);
    }
}

int main()
{
    int capacityVal;

    cin >> capacityVal;
    RunTracker(capacityVal);

    return 0;
}