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
        ofstream ob("MissionData/Astronaut.txt", ios::app);
        if (!ob)
        {
            cout << "Could not open file" << endl;
        }
        else
        {
            // ob << "NAME\t\t\tSPECIALIZATION\t\t\tAGE\t\t\tGENDER\n";
            for (int i = 1; i <= number_of_crew_members; i++)
            {
                ob << astronaut->getName() << "\t\t\t" << astronaut->getSpecialization() << "\t\t\t" << astronaut->getAge() << "\t\t\t" << astronaut->getGender() << "\n";
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