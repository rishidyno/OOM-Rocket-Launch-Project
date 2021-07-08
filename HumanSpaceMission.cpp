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

    printf("Total number of Crew Members selected for this Mg O\n");
    cin >> number_of_crew_members;
    sleep(1);

    printf("Passengers have boarded in the SpaceMission \n");
}

// void HumanSpaceMission::checkPayload()
// {
//     sleep(2);
//     printf("Payload %lf checking is initiated\n",total_payload);
//     sleep(2);
//     printf("Payload is under the red mark and is docked into the SpaceMission\n");
// }