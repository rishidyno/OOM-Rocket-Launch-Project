#include "Astronaut.h"
#include<bits/stdc++.h>

using namespace std;


void Astronaut::setName(string name)
{
    this->name = name;
}
void Astronaut::printName()
{
    cout<<name<<"\n";
}

void Astronaut::setAge(int age)
{
    this->age=age;
}
void Astronaut::setAge(int age)
{
    this->age=age;
}

void Astronaut::setGender(Gender gender)
{
    this->gender=gender;
}

void Astronaut::setSpecialization(string specialization)
{
    this->specialization=specialization;
}

string Astronaut::getName(){
    return name;
}

string Astronaut::getSpecialization()
{
    return specialization;
}


