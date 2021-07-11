#include <bits/stdc++.h>
#include "Model/Astronaut.h"
#include "Rover.h"
#include "Satellite.h"
#include "SpaceMission.h"

using namespace std;

// using namespace ios;

class file
{
public:
    void store_details_of_astronaut(Astronaut *astronaut)
    {
        int number_of_crew_members = sizeof(astronaut) / sizeof(Astronaut *);
        ofstream ob("MissionData/Astronaut.dat", ios::out);
        if (!ob)
        {
            cout << "Could not open file" << endl;
        }
        else
        {
            ob << "NAME\tSPECIALIZATION\tAGE\tGENDER\n";
            for (int i = 1; i <= number_of_crew_members; i++)
            {
                ob << astronaut->getName() << "\t" << astronaut->getSpecialization() << "\t" << astronaut->getAge() << "\t" << astronaut->getGender() << "\n";
                astronaut++;
            }
        }
    }
};
// int main()
// {
//     Astronaut *astronaut = new Astronaut();
//     (new file())->store_details_of_astronaut(astronaut);
//     return 0;
// }