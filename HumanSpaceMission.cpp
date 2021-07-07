#include <bits/stdc++.h>
#include "HumanSpaceMission.h"
#include "SpaceMission.h"
#include "unistd.h"
#include "unwind.h"
using namespace std;

HumanSpaceMission::HumanSpaceMission()
{
    printf("Enter the number_of_passengers and number_of_astraunauts and total_payload in the SpaceMission for the space exploration SpaceMission\n");
    cin >> number_of_astraunauts;
    cin >> number_of_passengers;
    cin >> total_payload;
    sleep(2);
    printf("Passengers have boarded in the SpaceMission \n");
}
HumanSpaceMission::~HumanSpaceMission()
{
    sleep(2);
    printf("HumanSpaceMission SpaceMission successful ended\n");
}
void HumanSpaceMission::checkPayload()
{
    sleep(2);
    printf("Payload %lf checking is initiated\n",total_payload);
    sleep(2);
    printf("Payload is under the red mark and is docked into the SpaceMission\n");
}