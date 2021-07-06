#include<bits/stdc++.h>
#include<unistd.h>
#include "Rocket.h"
#include "Rover.h"
#include "SpaceExploration.h"
#include "Satellite.h"
#include "Sensors.h"
#include "ControlUnit.h"

using namespace std;

int main()
{  
    Rocket* rocket;
    cout << "Welcome to INDIAN SPACE RESEARCH ORGANIZATION\n ";
    sleep(1);

    cout<<"The Indian Space Research Organisation[a] (ISRO) or (IAST : Bhāratīya Antrikṣ Anusandhān Saṅgaṭhan) is the national space agency of India, headquartered in Bengaluru. It operates under Department of Space (DOS) which is directly overseen by the Prime Minister of India, while Chairman of ISRO acts as executive of DOS as well. ISRO is the primary agency in India to perform tasks related to space based applications, space exploration and development of related technologies.[6] It is one of six government space agencies in the world which possess full launch capabilities, deploy cryogenic engines, launch extraterrestrial missions and operate large fleets of artificial satellites.";
    sleep(1);

    rocket = new Rover();
    rocket-> loadRover();
}