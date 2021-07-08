#include <bits/stdc++.h>
#include "Satellite.h"
#include "SpaceMission.h"
#include <unistd.h>
using namespace std;

Satellite::Satellite()
{
    printf("Enter the orbital orbital Radius of your satellite from the earth centre\n");
    cin >> orbitalRadius;
    sleep(2);
}

void Satellite::check_successful_loading()
{
    printf("performing satellite loading checkes\n");
    sleep(2);
    printf("All checks of satellite are successful\n");
}

void Satellite::load_the_satellite()
{
    sleep(2);
    printf("Satellite is loading in the rocket.");
}