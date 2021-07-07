#include <bits/stdc++.h>
#include "SpaceMission.h"
#ifndef ROVER_H
#define ROVER_H

using namespace std;

class Rover : public SpaceMission
{
private:
    string destination;
    string purpose;
    int weight_of_rover;

public:
    Rover();
    ~Rover();
    void load_rover_in_rocket();
    void check_successful_loading();
};

#endif