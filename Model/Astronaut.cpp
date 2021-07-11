#include "Astronaut.h"
#include <bits/stdc++.h>
using namespace std;

bool check_number(string str)
{
    for (int i = 0; i < str.length(); i++)
        if (isdigit(str[i]) == false)
            return false;
    return true;
}

int Astronaut::count = 1;

Astronaut::Astronaut()
{
    cout << "Enter the name of the Astronaut " << count << " : ";
    cin >> name;

    cout << "Enter the age of the Astronaut " << count << " : ";

    cin >> age;

    while (!check_number(age))
    {
        // long long n = stoi(age);

        if (check_number(age) & stoi(age)>0 & stoi(age)<101)
        {
            cout << age << "\n";
            break;
        }

        else
        {
            cout << "Enter a integer age less then 100\n";
            cin >> age;
        }
    }
    count++;

    printf("Enter the gender of the Astronaut MALE or FEMALE or TRANSGENDER : ");
in:
    // Astronaut::Gender gender;
    string sex;
    cin >> sex;
    if (sex == "MALE" | sex == "male" || sex == "M" || sex == "m")
    {
        this->gender = Astronaut::Gender::MALE;
    }
    else if (sex == "FEMALE" || sex == "female" || sex == "F" || sex == "f")
    {
        this->gender = Astronaut::Gender::FEMALE;
    }
    else if (sex == "TRANSGENDER" || sex == "transgender" || sex == "T" || sex == "t")
    {
        this->gender = Astronaut::Gender::TRANSGENDER;
    }
    else
    {
        goto in;
    }
}

void Astronaut::setName(string name)
{
    this->name = name;
}
void Astronaut::printName()
{
    cout << name << "\n";
}

void Astronaut::setAge(int age)
{
    this->age = age;
}

void Astronaut::setGender(Gender gender)
{
    this->gender = gender;
}

void Astronaut::setSpecialization(string specialization)
{
    this->specialization = specialization;
}

string Astronaut::getName()
{
    return name;
}

string Astronaut::getSpecialization()
{
    return specialization;
}

string Astronaut::getAge(string age)
{
    this->age = age;
}
