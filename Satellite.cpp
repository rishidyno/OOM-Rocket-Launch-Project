#include <bits/stdc++.h>
#include "Rocket.h"
#include "Satellite.h"
#include "unistd.h"
#include "unwind.h"
using namespace std;

Satellite::Satellite()
{
    printf("Enter the orbital orbitalRadius of your satellite from the earth centre\n");
    cin >> orbitalRadius;
    sleep(2);
    printf("Satellite is unloading  and is about to get launched in the orbit \n");
    sleep(2);
    printf("Satellite has launched in the orbit and now is ready to send and receive signals to communicate\n");
}
Satellite::~Satellite()
{
    sleep(2);
    printf("Satellite mission successful\n");
}
void Satellite::checkSuccessfulLoading()
{
    printf("performing satellite loading checkes\n");
    sleep(2);
    printf("All checks of satellite are successful\n");
}
void Satellite::loadTheSatellite()
{
    sleep(2);
    printf("Satellite is loading the rocket and is ready to launch in the orbit");
}