#include<bits/stdc++.h>
#define ROCKET_H
#ifdef ROCKET_H
using namespace std;
class Rocket
{
    private:
        string id,type,name;
        Rocket(string, string, string);
        string getName();
        string getId();
        string getType();
};
#endif