#include <bits/stdc++.h>
#include "SpaceMission.h"
#include <unistd.h>
#include <unwind.h>
SpaceMission::SpaceMission()
{  
    printf("Enter your SpaceMission name");
    cin >> name;
    fuel_type = "Hydrogen";
    id = to_string(time(0));
    cout << "Creating a SpaceMission " << name << " with id" << id << "fuel type " << fuel_type << endl;
}

SpaceMission::~SpaceMission()
{
    cout<< "The SpaceMission with name " << name << "and id"<<  id << "fuel type " << fuel_type << endl;
}

void SpaceMission::fillFuel()
{
    sleep(2);
    printf("liquid hydrogen  is filling in the SpaceMission\n");
    sleep(2);
    printf("fuel is filled\n");
}

void SpaceMission::setOxidiser()
{
    sleep(2);
    printf("Adding  oxidising agent to SpaceMission fuel(LOX)\n");
    sleep(2);
    printf("Now the whole combustion and launch unit is ready\n");
}
void SpaceMission::setId(string id)
{
    this->id = id;
}

void SpaceMission::setName(string name)
{
    this->name = name;
}

string SpaceMission::getId()
{
    return id;
}

string SpaceMission::getName()
{
    return id;
}