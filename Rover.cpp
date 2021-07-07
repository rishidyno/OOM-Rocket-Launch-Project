#include <bits/stdc++.h>
#include "SpaceMission.h"
#include "Rover.h"
#include "unistd.h"
#include "unwind.h"
using namespace std;

Rover::Rover()
{
    printf("Enter the destination of the rover\n");
    getline(cin, destination);
    sleep(2);
    printf("Rover is unloading  and is about to get launched in the orbit \n");
    sleep(2);
    printf("Rover has launched in the orbit and now is ready to send and receive signals to communicate\n");
}
Rover::~Rover()
{
    sleep(2);
    printf("Rover mission successful\n");
}
void Rover::check_successful_loading()
{
    printf("performing rover loading checkes\n");
    sleep(2);
    printf("All checks of rover are successful\n");
}
void Rover::load_rover_in_rocket()
{
    sleep(2);
    printf("Rover is loading the SpaceMission and is ready to launch in the orbit");
}