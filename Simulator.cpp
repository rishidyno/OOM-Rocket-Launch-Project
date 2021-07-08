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

void simulate1(SpaceMission* mission, ControlUnit *c1){
	mission->about();

	((Rover*)mission)->load_rover_in_rocket();
	((Rover*)mission)->check_successful_loading();
	c1->check_payload();
	c1->check_all_system_status();
	c1->iniatialising_launch_sequence();
	c1->mission_success();
	
}

void simulate2(SpaceMission* mission,ControlUnit *c1){

}

void simulate3(SpaceMission* mission, ControlUnit *c1){
	mission->about();
    ((Satellite*)mission)->load_the_satellite();
	((Satellite*)mission)->check_successful_loading();
	c1->check_payload();
	c1->check_all_system_status();
	c1->iniatialising_launch_sequence();
	c1->mission_success();
}

int main()
{   ControlUnit *c1;
	cout << "Welcome to INDIAN SPACE RESEARCH ORGANIZATION\n ";
	sleep(1);

    SpaceMission* mission;

    cout<<"Select Mission Type: "<<endl;
	cout<<"1. Rover"<<endl;
	cout<<"2. Human Space Mission"<<endl;
	cout<<"3. Sattelite Launch"<<endl;

	string input;  cin>>input;
    
	if(input=="1"){
		mission = new Rover();
		simulate1(mission,c1);
	}
	else if(input=="2"){
		mission = new HumanSpaceMission();
		simulate2(mission, c1);
	}
	else if(input=="3"){
		mission = new Satellite();
		simulate3(mission, c1);
	}

	SpaceMission *SpaceMission;

	printf("Enter the SpaceMission type");
	string SpaceMission_type;


}