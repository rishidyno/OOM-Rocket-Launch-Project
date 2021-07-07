#include <bits/stdc++.h>
#include "SpaceMission.h"
#include "Rover.h"
#include "unistd.h"
#include "unwind.h"
using namespace std;

Rover::Rover()
{
    printf("Enter the destination of the rover : \n");
    getline(cin,destination);
    sleep(1);

    printf("Enter weight of rover : \n");
    cin>>weight_of_rover;
    sleep(1);
}

// void Rover::set_destination(string s){
//     destination = s;
// }

// void Rover::set_weight_of_rover(int n){
//     weight_of_rover = n;
// }

void Rover::check_successful_loading()
{
    printf("performing rover loading checkes\n");
    sleep(2);
    printf("All checks of rover are successful\n");
}
void Rover::load_rover_in_rocket()
{
    sleep(2);
    printf("Rover is loading and is ready to launch in the orbit");
}