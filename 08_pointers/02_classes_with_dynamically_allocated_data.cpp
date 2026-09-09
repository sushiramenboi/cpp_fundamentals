#include <iostream>
using namespace std;

class Activity
{
public:
    Activity(int activitySteps = 0, int activitySeconds = 0);
    void SetSteps(int activitySteps);
    void SetSeconds(int activitySeconds);
    int GetSteps();
    int GetSeconds();

private:
    int steps;
    int seconds;
};

Activity::Activity(int activitySteps, int activitySeconds)
{
    steps = activitySteps;
    seconds = activitySeconds;
}

void Activity::SetSteps(int activitySteps)
{
    steps = activitySteps;
}

void Activity::SetSeconds(int activitySeconds)
{
    seconds = activitySeconds;
}

int Activity::GetSteps()
{
    return steps;
}

int Activity::GetSeconds()
{
    return seconds;
}

class ActivityTracker
{
public:
    ActivityTracker();
    void AddActivity(int activitySteps, int activitySeconds);
    Activity GetActivityAt(int index);
    int GetSize();

private:
    Activity *activities;
    int activitiesCapacity;
    int activitiesSize;

private:
    void IncreaseCapacity();
};

ActivityTracker::ActivityTracker()
{
    activitiesSize = 0;
    activitiesCapacity = 2;
    activities = new Activity[activitiesCapacity];
}

Activity ActivityTracker::GetActivityAt(int index)
{
    return activities[index];
}

int ActivityTracker::GetSize()
{
    return activitiesSize;
}

void ActivityTracker::IncreaseCapacity()
{
    Activity *newArray;
    int i;

    activitiesCapacity *= 2;
    newArray = new Activity[activitiesCapacity];

    for (i = 0; i < activitiesSize; ++i)
    {
        newArray[i] = activities[i];
    }
    delete[] activities;
    activities = newArray;
}

void ActivityTracker::AddActivity(int activitySteps, int activitySeconds)
{

    if (activitiesCapacity == activitiesSize)
    {
        IncreaseCapacity();
    }

    activities[activitiesSize].SetSteps(activitySteps);
    activities[activitiesSize].SetSeconds(activitySeconds);
    activitiesSize += 1;
}

double CalcStepsPerHour(ActivityTracker &tracker)
{
    int totalSteps;
    int totalSeconds;
    int i;

    totalSteps = 0;
    totalSeconds = 0;
    for (i = 0; i < tracker.GetSize(); ++i)
    {
        totalSteps = totalSteps + tracker.GetActivityAt(i).GetSteps();
        totalSeconds = totalSeconds + tracker.GetActivityAt(i).GetSeconds();
    }

    return (static_cast<double>(totalSteps) / totalSeconds) * 60 * 60;
}

int main()
{
    ActivityTracker tracker;
    int numActivities;
    int activitySteps;
    int activitySeconds;
    int i;
    double avgStepsPerHour;

    cin >> numActivities;
    for (i = 0; i < numActivities; ++i)
    {
        cin >> activitySteps;
        cin >> activitySeconds;
        tracker.AddActivity(activitySteps, activitySeconds);
    }

    cout << "Average steps/hour: " << CalcStepsPerHour(tracker) << endl;

    return 0;
}