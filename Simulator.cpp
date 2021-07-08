#include <bits/stdc++.h>
#include <unistd.h>
#include "Model/Astronaut.h"
#include "SpaceMission.h"
#include "HumanSpaceMission.h"
#include "Satellite.h"
#include "Sensors.h"
#include "ControlUnit.h"
#include "SpaceMission.h"
#include "Rover.h"

using namespace std;

void simulate1(SpaceMission *mission, ControlUnit *c1)
{
	((Rover *)mission)->load_rover_in_rocket();
	((Rover *)mission)->check_successful_loading();
	c1->check_payload();
	c1->check_all_system_status();
	c1->iniatialising_launch_sequence();
	c1->mission_success();
}

void simulate2(SpaceMission *mission, ControlUnit *c1)
{
	c1->check_all_system_status();
	c1->iniatialising_launch_sequence();
	c1->mission_success();
}

void simulate3(SpaceMission *mission, ControlUnit *c1)
{
	((Satellite *)mission)->load_the_satellite();
	((Satellite *)mission)->check_successful_loading();
	c1->check_payload();
	c1->check_all_system_status();
	c1->iniatialising_launch_sequence();
	c1->mission_success();
}

int main()
{
	ControlUnit *c1;
	cout << "                       Welcome to INDIAN SPACE RESEARCH ORGANIZATION\n ";
	sleep(1);

	SpaceMission *mission;

	cout << "    Select Type of SPACE MISSION: " << endl;
	sleep(2);
	cout << "1. Rover" << endl;
	sleep(2);
	cout << "2. Sattelite Launch" << endl;
	sleep(2);
	cout << "3. Human Space Mission\n" << endl;
	sleep(2);

	cout<<"🚀🚀🚀🚀🚀🚀🚀🚀🚀🚀🚀🚀🚀🚀🚀🚀🚀🚀🚀🚀🚀🚀🚀🚀🚀🚀🚀🚀🚀🚀\n";
	sleep(1);

	cout << "🚀🚀  1-->        TAKES A ROVER TO A PLANET             🚀🚀\n";
	sleep(2);
	cout << "🚀🚀  2-->     TAKES SATELLITE TO ORBIT OF EARTH        🚀🚀\n";
	sleep(2);
	cout << "🚀🚀  3-->     FOR INTER PLANATORY MAN MISSIONS         🚀🚀\n";
	sleep(2);

	cout << "Enter the tpye of mission You want to go on with ISRO...\n";

	int input;
	cin >> input;
	sleep(1);

	if (input == 1)
	{
		mission = new Rover();
		simulate1(mission, c1);
	}
	else if (input == 2)
	{
		mission = new Satellite();
		simulate3(mission, c1);
	}
	else if (input == 3)
	{
		mission = new HumanSpaceMission();
		simulate2(mission, c1);
	}
}