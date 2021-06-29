#include<bits/stdc++.h>
#include "ControlUnit.h"
#include<unistd.h>
using namespace std;
int main()
{
    // ControlUnit* ob = new ControlUnit();
    // ob->StartingLaunchSequence();
    printf("Rocket is about to get launched\n Starting Launch Sequence\n");
    int i = 10;
    while (i >= 0)
    {
        printf("%d\n", i);
        sleep(1);
        i--;
    }
    return 0;
}