#include <bits/stdc++.h>
<<<<<<< HEAD
#include "Rocket.h"
using namespace std;
||||||| ac373ef
#include "Rocket.h"
// using namespace std;
=======
#include "SpaceMission.h"
// using namespace std;
>>>>>>> e558409b4ab7043f15a1591b068c985b7750508e
#ifndef SENSORS_H
#define SENSORS_H
<<<<<<< HEAD
class Sensors : public Rocket
||||||| ac373ef

class Sensors : public Rocket
=======

class Sensors : public SpaceMission
>>>>>>> e558409b4ab7043f15a1591b068c985b7750508e
{
    public:
        double gyroscope, accelerometer, gps, Theodolite;
        double getGyroscope();
        double getAccelerometer();
        double getGPS();
        double getTheodolite();
};
#endif