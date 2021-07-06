#include <bits/stdc++.h>
#include "Rocket.h"
#ifndef ROVER_H
#define ROVER_H

using namespace std;

class Rover : public Rocket
{
    private:
        string destination;
    
    public:
        Rover();
        ~Rover();
        void loadRover();
        void checkSuccessfulLoading();
};

#endif