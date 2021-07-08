#include <bits/stdc++.h>
#include "HumanSpaceMission.h"
#include "SpaceMission.h"
#include "unistd.h"
#include "unwind.h"
using namespace std;

HumanSpaceMission::HumanSpaceMission()
{ 
    cout << "Enter destination of the human space mission: ";
    getline(cin, destination);
    sleep(1);

    printf("Enter Total number of Crew Members selected for this Mission : ");
    cin >> number_of_crew_members;
    sleep(1);
    addAstraunautsToTheMission();
    printf("Passengers have boarded in the SpaceMission \n");
}

// void HumanSpaceMission::checkPayload()
// {
//     sleep(2);
//     printf("Payload %lf checking is initiated\n",total_payload);
//     sleep(2);
//     printf("Payload is under the red mark and is docked into the SpaceMission\n");
// }

void HumanSpaceMission::addAstraunautsToTheMission()
{
    Astronaut* astronaut = (Astronaut*)malloc(sizeof(Astronaut)*number_of_crew_members);
    for (int i = 0;i<number_of_crew_members; i++)
    {
        astronaut = new Astronaut();
        astronaut++;
    }
}