#include <bits/stdc++.h>
#include <unistd.h>
#include "SpaceMission.h"
#include "Rover.h"
#include "HumanSpaceMission.h"
#include "Satellite.h"
#include "Sensors.h"
#include "ControlUnit.h"

using namespace std;

void run_simulator(SpaceMission *SpaceMission)
{
}

int main()
{

	cout << "Welcome to INDIAN SPACE RESEARCH ORGANIZATION\n ";
	sleep(1);

	cout << "The Indian Space Research Organisation[a] (ISRO) or (IAST : Bhāratīya Antrikṣ Anusandhān Saṅgaṭhan) is the national space agency of India, headquartered in Bengaluru. It operates under Department of Space (DOS) which is directly overseen by the Prime Minister of India, while Chairman of ISRO acts as executive of DOS as well. ISRO is the primary agency in India to perform tasks related to space based applications, space exploration and development of related technologies.[6] It is one of six government space agencies in the world which possess full launch capabilities, deploy cryogenic engines, launch extraterrestrial missions and operate large fleets of artificial satellites.\n";
	sleep(1);
	SpaceMission *SpaceMission;

	// SpaceMission = new SpaceMission();
	// SpaceMission->fillFuel();
	// SpaceMission->setOxidiser();
	printf("Enter the SpaceMission type");
	string SpaceMission_type;
	getline(cin, SpaceMission_type);
	// getline(cin, SpaceMission_type);

	if (SpaceMission_type == "ROVER" || SpaceMission_type == "rover")
	{
		SpaceMission = new Rover();
		SpaceMission->fillFuel();
		(*SpaceMission).setOxidiser();
		((Rover *)SpaceMission)->load_Rover_in_rocket();
		((Rover *)SpaceMission)->check_Successful_Loading();
	}

	else if (SpaceMission_type == "SATELLITE" || SpaceMission_type == "satellite")
		SpaceMission = new Satellite();
	else if (SpaceMission_type == "SPACE EXPLORATION" || SpaceMission_type == "space exploration")
		SpaceMission = new HumanSpaceMission();
	else
	{
		cerr << "Invalid SpaceMission... aborting ..." << endl;
		exit(1);
	}

	run_simulator(SpaceMission);
}