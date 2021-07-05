#include <bits/stdc++.h>
#include "Rocket.h"
#ifndef SATELLITE_H
#define SATELLITE_H

using namespace std;

class Satellite : public Rocket
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