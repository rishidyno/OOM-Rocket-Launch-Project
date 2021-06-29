#include<bits/stdc++.h>
#include "ControlUnit.h"
#include "unistd.h"
#include "unwind.h"
void ControlUnit::InitialisingPreparationForLaunch()
{
    printf("Prepareing the rocket components for launch");
}
void ControlUnit::StartingLaunchSequence()
{
    printf("Rocket is about to get launched\n Starting Launch Sequence\n");
    int i = 10;
    while(i>=0)
    {
        printf("%d\n", i);
        sleep(1);
        i--;
    }
}