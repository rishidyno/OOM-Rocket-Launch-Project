#include <bits/stdc++.h>
#include "SpaceMission.h"
#include "ControlUnit.h"
#include "Model/Astronaut.h"
#ifndef HumanSpaceMission_H
#define HumanSpaceMission_H

using namespace std;

class HumanSpaceMission : public SpaceMission
{
private:
    string mission_name, destination;
    int number_of_crew_members;
    ControlUnit *control;
    Astronaut *astronaut;

public:
    HumanSpaceMission();
    void addAstraunautsToTheMission();
};

#endif