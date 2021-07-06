#include <bits/stdc++.h>
#include "Rocket.h"
#include "Rover.h"
#include "unistd.h"
#include "unwind.h"
using namespace std;

Rover::Rover()
{
    printf("Enter the destination of the rover\n");
    cin>>destination;
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
void Rover::checkSuccessfulLoading()
{
    printf("performing rover loading checkes\n");
    sleep(2);
    printf("All checks of rover are successful\n");
}
void Rover::loadRover()
{
    sleep(2);
    printf("Rover is loading the rocket and is ready to launch in the orbit");
}