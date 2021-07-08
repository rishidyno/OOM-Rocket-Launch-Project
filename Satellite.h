#include <bits/stdc++.h>
#include "SpaceMission.h"
#include "ControlUnit.h"
#ifndef SATELLITE_H
#define SATELLITE_H

using namespace std;

class Satellite : public SpaceMission
{
private:
    double orbitalRadius;
    ControlUnit *control;

public:
    Satellite();
    void load_the_satellite();
    void check_successful_loading();
};

#endif