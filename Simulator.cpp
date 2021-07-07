#include <bits/stdc++.h>
#include <unistd.h>

#include "Rover.h"
#include "HumanSpaceMission.h"
#include "Satellite.h"
#include "Sensors.h"
#include "ControlUnit.h"
#include "SpaceMission.h"

using namespace std;

// void run_simulator(SpaceMission *SpaceMission)
// {
// }

int main()
{   ControlUnit *c1;

	cout << "Welcome to INDIAN SPACE RESEARCH ORGANIZATION\n ";
	sleep(1);

	Rover rover;
    
	// printf("Enter the destination of the rover : \n");
    // string s; cin>>s;
	// rover.set_destination(s);

	// printf("Enter weight of rover : \n");
    // int n; cin>>n;
	// rover.set_weight_of_rover(n);

	rover.about();
	rover.load_rover_in_rocket();
	rover.check_successful_loading();
	c1->check_payload();
	c1->check_all_system_status();
	c1->iniatialising_launch_sequence();
	c1->mission_success();


	// SpaceMission *SpaceMission;

	// printf("Enter the SpaceMission type");
	// string SpaceMission_type;


	// if (SpaceMission_type == "ROVER" || SpaceMission_type == "rover")
	// {
	// 	SpaceMission = new Rover();
	// 	SpaceMission->fillFuel();
	// 	(*SpaceMission).setOxidiser();
	// 	// ((Rover *)SpaceMission)->load_Rover_in_Mission();
	// 	// ((Rover *)SpaceMission)->check_Successful_Loading();
	// }

	// else if (SpaceMission_type == "SATELLITE" || SpaceMission_type == "satellite")
	// 	SpaceMission = new Satellite();
	// else if (SpaceMission_type == "SPACE EXPLORATION" || SpaceMission_type == "space exploration")
	// 	SpaceMission = new HumanSpaceMission();
	// else
	// {
	// 	cerr << "Invalid SpaceMission... aborting ..." << endl;
	// 	exit(1);
	// }

	// run_simulator(SpaceMission);

}