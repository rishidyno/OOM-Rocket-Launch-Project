#include <bits/stdc++.h>
#ifndef Mission_H
#define Mission_H
using namespace std;
class SpaceMission
{
    private:
        string mission_name, purpose_of_mission;
    
    public:
        SpaceMission();
        void about();
        string get_mission_name();
};

#endif