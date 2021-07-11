#include <bits/stdc++.h>
#include "HumanSpaceMission.h"
#include "SpaceMission.h"
#define nocm number_of_crew_members
#include "unistd.h"
#include "unwind.h"
using namespace std;

HumanSpaceMission::HumanSpaceMission()
{
    cout << "Enter destination of the human space mission: ";
    getline(cin, destination);
    sleep(1);
    printf("Atmost 10 crew membes can be selected for the mission.\n");
    printf("Enter Total number of Crew Members selected : ");

    cin >> nocm;
    while (!(nocm == "1" || nocm == "2" || nocm == "3" || nocm == "4" || nocm == "5" || nocm == "6" || nocm == "7" || nocm == "8" || nocm == "9" || nocm == "10"))
    {
        cout << "Enter a valid number between 1 and 10 : ";
        cin >> nocm;
    }

    int n = stoi(nocm);
    addAstraunautsToTheMission();

    sleep(1);

    printf("Passengers have boarding into the rocket........ \n");
    sleep(3);
}

void HumanSpaceMission::addAstraunautsToTheMission()
{
    Astronaut *astronaut = (Astronaut *)malloc(sizeof(Astronaut) * stoi(number_of_crew_members));
    for (int i = 0; i < stoi(number_of_crew_members); i++)
    {
        astronaut = new Astronaut();
        astronaut++;
    }
}