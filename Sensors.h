#include <bits/stdc++.h>
#include "SpaceMission.h"
using namespace std;
#ifndef SENSORS_H
#define SENSORS_H

class Sensors : public SpaceMission
{
    public:
        double gyroscope, accelerometer, gps, Theodolite;
        double getGyroscope();
        double getAccelerometer();
        double getGPS();
        double getTheodolite();
};
#endif