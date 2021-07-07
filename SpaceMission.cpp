#include <bits/stdc++.h>
#include "SpaceMission.h"
#include <unistd.h>

SpaceMission::SpaceMission()
{  
    cout<<"Enter name of Space Mission : ";
    getline(cin,mission_name);
    cout<<"Enter purpose of Space Mission : ";
    getline(cin,purpose_of_mission);
}

void SpaceMission::about(){
    sleep(1);
    cout<<"The name of this SpaceMission is "<<mission_name<<endl;
    cout<<"The purpose of this SpaceMission is : ";
    cout<<purpose_of_mission<<endl;
}

string SpaceMission::get_mission_name(){
    return mission_name;
}