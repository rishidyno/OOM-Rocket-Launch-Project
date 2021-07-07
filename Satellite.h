#include <bits/stdc++.h>
#include "SpaceMission.h"
#ifndef SATELLITE_H
#define SATELLITE_H

using namespace std;

class Satellite : public SpaceMission
{
private:
    long double orbitalRadius;

public:
    Satellite();
    ~Satellite();
    void loadTheSatellite();
    void checkSuccessfulLoading();
};

#endif