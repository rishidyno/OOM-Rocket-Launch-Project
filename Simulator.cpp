#include<bits/stdc++.h>
#include  <unistd.h>
#include "Rocket.h"
#include "Rover.h"
#include "SpaceExploration.h"
#include "Satellite.h"
#include "Sensors.h"
#include "ControlUnit.h"

using namespace std;

void run_simulator(Rocket* rocket)
{

}

int main()
{
    
    cout << "Welcome to INDIAN SPACE RESEARCH ORGANIZATION\n ";
    sleep(1);

    cout<<"The Indian Space Research Organisation[a] (ISRO) or (IAST : Bhāratīya Antrikṣ Anusandhān Saṅgaṭhan) is the national space agency of India, headquartered in Bengaluru. It operates under Department of Space (DOS) which is directly overseen by the Prime Minister of India, while Chairman of ISRO acts as executive of DOS as well. ISRO is the primary agency in India to perform tasks related to space based applications, space exploration and development of related technologies.[6] It is one of six government space agencies in the world which possess full launch capabilities, deploy cryogenic engines, launch extraterrestrial missions and operate large fleets of artificial satellites.\n";
    sleep(1);
    Rocket *rocket;

    rocket = new Rocket();
    rocket->fillFuel();
    rocket->setOxidiser();

    string rocket_type;
    getline(cin, rocket_type);

	if(rocket_type == "ROVER" || rocket_type == "rover")
		rocket = new Rover();

	else if(rocket_type == "SATELLITE" || rocket_type == "satellite")
		rocket = new Satellite();
	else if(rocket_type == "SPACE EXPLORATION" || rocket_type == "space exploration")
		rocket = new SpaceExploration();
	else
	{
		cerr<<"Invalid rocket... aborting ..."<<endl;
		exit(1);
	}
	run_simulator(rocket);

}