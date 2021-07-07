#include <bits/stdc++.h>
#include "ControlUnit.h"
#include "unistd.h"
#include "unwind.h"
void ControlUnit::SelectSpaceMissionType()
{
    printf("Prepareing the SpaceMission components for launch");
}
void ControlUnit::CheckAllSystem()
{
    printf("Final Check all necessary systems ! \n ");
    sleep(2);
    printf("Cryogenic engine check successful !\n");
    sleep(2);
    printf("Fuel check successful !\n");
    sleep(2);
    printf("Thermal screening check succesful!");
    sleep(2);
    printf("All System check successful !\n");
    sleep(2);
    printf("Communication System check succesful !\n");
    sleep(2);
    printf("SpaceMission ready for launch!\n");
    sleep(2);
}

void ControlUnit::InitialingLaunchSequence()
{
    std::cout<<"Initialing Launch Sequence";
    int i = 10;
    while (i >= 0)
    {
        std::cout<<i<<"\n";
        sleep(1);
        i--;
    }
    std::cout << "";
}

void SpaceMissionLauncingGraphics()
{

}

void ControlUnit::Stage1TELEMETARY()
{
    

}