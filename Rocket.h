#include <bits/stdc++.h>
#define ROCKET_H
#ifdef ROCKET_H
using namespace std;
class Rocket
{
private:
    string id, name,fuel_type,oxidiser;

public:
    Rocket();
    ~Rocket();
    void fillFuel();
    void setOxidiser();

    void setName(string);
    void setId(string);
    void setFuelType(string);
    string getName();
    string getId();
    string getType();
};
#endif