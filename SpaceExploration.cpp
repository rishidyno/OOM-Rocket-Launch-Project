#include <bits/stdc++.h>
#include "Rocket.h"
#include "SpaceExploration.h"
#include "unistd.h"
#include "unwind.h"
using namespace std;

SpaceExploration::SpaceExploration()
{
    printf("Enter the number_of_passengers and number_of_astraunauts and total_payload in the rocket for the space exploration mission\n");
    cin >> number_of_astraunauts;
    cin >> number_of_passengers;
    cin >> total_payload;
    sleep(2);
    printf("Passengers have boarded in the rocket \n");
}
SpaceExploration::~SpaceExploration()
{
    sleep(2);
    printf("SpaceExploration mission successful ended\n");
}
void SpaceExploration::checkPayload()
{
    sleep(2);
    printf("Payload %ld checking is initiated\n",total_payload);
    sleep(2);
    printf("Payload is under the red mark and is docked into the rocket\n");
}