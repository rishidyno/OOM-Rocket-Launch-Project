#include <bits/stdc++.h>
#include "Rocket.h"
#include <unistd.h>
#include <unwind.h>
Rocket::Rocket()
{  
    printf("Enter your rocket name");
    cin >> name;
    fuel_type = "Hydrogen";
    id = to_string(time(0));
    cout << "Creating a Rocket " << name << " with id" << id << "fuel type " << fuel_type << endl;
}

Rocket::~Rocket()
{
    cout<< "The Rocket with name " << name << "and id"<<  id << "fuel type " << fuel_type << endl;
}

void Rocket::fillFuel()
{
    sleep(2);
    printf("liquid hydrogen  is filling in the rocket\n");
    sleep(2);
    printf("fuel is filled\n");
}

void Rocket::setOxidiser()
{
    sleep(2);
    printf("Adding  oxidising agent to rocket fuel(LOX)\n");
    sleep(2);
    printf("Now the whole combustion and launch unit is ready\n");
}
void Rocket::setId(string id)
{
    this->id = id;
}

void Rocket::setName(string name)
{
    this->name = name;
}

string Rocket::getId()
{
    return id;
}

string Rocket::getName()
{
    return id;
}