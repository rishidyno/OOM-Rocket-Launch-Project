#include <bits/stdc++.h>
#include "Rocket.h"
// using namespace std;
#define SENSORS_H
#ifdef SENSORS_H
class Sensors : public Rocket
{
    public:
        double gyroscope, accelerometer, gps, Theodolite;
        double getGyroscope();
        double getAccelerometer();
        double getGPS();
        double getTheodolite();
};
#endif