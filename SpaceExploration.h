#include <bits/stdc++.h>
#include "Rocket.h"
#ifndef SPACEEXPLORATION_H
#define SPACEEXPLORATION_H

using namespace std;

class SpaceExploration : public Rocket
{
private:
    int number_of_passengers;
    int number_of_astraunauts;
    double total_payload;
public:
    SpaceExploration();
    ~SpaceExploration();
    void checkPayload();
};

#endif