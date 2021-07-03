#include <bits/stdc++.h>
#include "ControlUnit.h"
#include "unistd.h"
#include "unwind.h"
void ControlUnit::SelectRocketType()
{
    printf("Prepareing the rocket components for launch");
}
void ControlUnit::CheckAllSystem()
{
    printf("Rocket is about to get launched\n Starting Launch Sequence\n");
    int i = 10;
    while (i >= 0)
    {
        std::cout<<i<<"\n";
        sleep(1);
        i--;
    }
}

void ControlUnit::InitialingLaunchSequence()
{
}

void ControlUnit::Stage1TELEMETARY()
{
}