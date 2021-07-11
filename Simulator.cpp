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
	cout << "                                        Welcome to INDIAN SPACE RESEARCH ORGANIZATION\n\n ";
	sleep(1);


		cout << "                                                 Select Type of SPACE MISSION: \n"
			 << endl;
		sleep(1);
		cout << "                                                 1. Rover Launch Mission" << endl;
		sleep(1);
		cout << "                                                 2. Sattelite Launch Mission" << endl;
		sleep(1);
		cout << "                                                 3. Human Space Mission\n"
			 << endl;
		sleep(1);
	in:
	ControlUnit *c1;
	SpaceMission *mission;
		cout << "                              🚀🚀🚀🚀🚀🚀🚀🚀🚀🚀🚀🚀🚀🚀🚀🚀🚀🚀🚀🚀🚀🚀🚀🚀🚀🚀🚀🚀🚀🚀\n";
		sleep(1);

		cout << "                              🚀🚀  1-->        TAKES A ROVER TO A PLANET             🚀🚀\n";
		sleep(1);
		cout << "                              🚀🚀  2-->     TAKES SATELLITE TO ORBIT OF EARTH        🚀🚀\n";
		sleep(1);
		cout << "                              🚀🚀  3-->     FOR INTER PLANATORY MAN MISSIONS         🚀🚀\n";
		sleep(1);

		cout << "                              Enter the type of mission You want to go on with ISRO...\n\n";
		cout << "                                        CHOICES any 1 of 3 missions (1/2/3) :: ";

		string input;
		cin >> input;
		// sleep(1);

		while (input != "1" | input != "2" | input != "3")
		{
			if (input == "1")
			{
				mission = new Rover();
				simulate1(mission, c1);
				break;
			}
			else if (input == "2")
			{
				mission = new Satellite();
				simulate3(mission, c1);
				break;
			}
			else if (input == "3")
			{
				mission = new HumanSpaceMission();
				simulate2(mission, c1);
				break;
			}
			else
			{
				cout << "Press the correct key to prceed into ISRO Rocket launch mission : ";
				cin >> input;
			}
		}
	cout << "\n				Press q to quit\n"
		 << "				Press n for next mission\n";
	string ch;
	cin >> ch;
	while (ch != "q" && ch != "n")
	{
		cout << "				Press q to quit\n"
			 << "				Press n for next mission\n";
		cin >> ch;
	}
	if (ch == "q")
		exit(0);
	else if (ch == "n")
		goto in;
}