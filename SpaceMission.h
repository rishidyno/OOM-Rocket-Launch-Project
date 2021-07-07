#include <bits/stdc++.h>
#ifndef SpaceMission_H
#define SpaceMission_H
using namespace std;
class SpaceMission
{
private:
    string id, name, fuel_type, oxidiser;

public:
    SpaceMission();
    ~SpaceMission();
    void fillFuel();
    void setOxidiser();

    void setName(string);
    void setId(string);
    void setFuelType(string);
    string getName();
    string getId();
    string getType();

    // virtual void loadRover();
    // virtual void checkSuccessfulLoading();

    // virtual void loadTheSatellite();
    // virtual void checkSuccessfulLoading();

    // virtual void checkPayload();

    // virtual void SelectSpaceMissionType();
    // virtual void CheckAllSystem();
    // virtual void InitialingLaunchSequence();
    // virtual void Stage1TELEMETARY();
};
#endif