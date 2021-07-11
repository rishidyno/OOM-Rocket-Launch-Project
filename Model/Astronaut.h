#include <bits/stdc++.h>
using namespace std;
#ifndef Astronaut_H
#define Astronaut_H

class Astronaut
{
public:
    static int count;
    enum Gender
    {
        MALE,
        FEMALE,
        TRANSGENDER
    };

private:
    string name, specialization;
    string age;
    Gender gender;

public:
    Astronaut();

    void setName(string);
    void setGender(Gender);
    void setAge(int);
    void setSpecialization(string);

    void printName();
    string getName();
    string getGender();
    string getAge(string);
    string getSpecialization();
};

#endif