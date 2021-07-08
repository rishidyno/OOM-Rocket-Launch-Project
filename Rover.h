#include <bits/stdc++.h>
#include "SpaceMission.h"
#include "ControlUnit.h"
#ifndef ROVER_H
#define ROVER_H

using namespace std;

class Rover : public SpaceMission
{
private:
    string destination;
    int weight_of_rover;
    ControlUnit *control;

public:
    Rover();
    // void set_destination(string);
    // void set_weight_of_rover(int);
    void load_rover_in_rocket();
    void check_successful_loading();
};

#endif