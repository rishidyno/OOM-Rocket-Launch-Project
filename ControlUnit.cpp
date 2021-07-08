#include <bits/stdc++.h>
#include "Rover.h"
#include "SpaceMission.h"
#include "ControlUnit.h"
#include <unistd.h>
using namespace std;

void ControlUnit::check_payload(){
    cout << "--------------------------------------\n";
    cout << "checking payload\n";
    cout << "payload checked successfully !\n";
}

void ControlUnit::check_all_system_status()
{   
    cout <<"--------------------------------------\n";
    printf("Final Checking all necessary systems ! \n");
    sleep(2);
    printf("Cryogenic engine check successful !\n");
    sleep(2);
    printf("Fuel check successful !\n");
    sleep(2);
    printf("Thermal screening check succesful!\n");
    sleep(2);
    printf("All System check successful !\n");
    sleep(2);
    printf("Communication System check succesful !\n");
    sleep(2);
    printf("Mission is ready to go!\n");
    sleep(2);
    cout << "--------------------------------------\n";
}

void ControlUnit::iniatialising_launch_sequence()
{
    cout<<"Initialing Launch Sequence\n";
    int i = 10;
    while (i >= 0)
    {
        cout<<i<<"\n";
        sleep(1);
        i--;
    }
    for(int i = 0; i < 3; i++){
        cout<<".";
        sleep(1);
    }
    cout<<endl;
}

void ControlUnit::mission_success()
{ 
    cout<<"Congratulations mission is completed successfully!\n";
}