#include <bits/stdc++.h>
#include "SpaceMission.h"
#ifndef HumanSpaceMission_H
#define HumanSpaceMission_H

using namespace std;

class HumanSpaceMission : public SpaceMission
{
private:
    int number_of_passengers;
    int number_of_astraunauts;
    double total_payload;
public:
    HumanSpaceMission();
    ~HumanSpaceMission();
    void checkPayload();
};

#endif