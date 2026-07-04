#include <iostream>
using namespace std;

int main() {
   int yourFriends;
   int totalFriends;

   cout << "how many people do you know?";
   cin >> yourFriends;
   cout << "you know " << yourFriends << " people" << endl;

   totalFriends = yourFriends;
   totalFriends = totalFriends * yourFriends;

   cout << "your firends know " << totalFriends << " people";
}