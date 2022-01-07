#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED
#include "ioutilities.h"
#include <string.h>

void startMenu ()
{
    out("\t- Welcome to COSCP -\n");

    out("\nHow to use this software?\n");
    out("-------------------------\n");
    out("The C Object Show/Camp Predictioner is a console application built in C\n");
    out("to predict the results of a currently running object show or object camp.\n");
    out("\nIt is important to know that this software can only be used during the merge\n");
    out("or if the show / camp does not have teams or each contestant is evaluated individually (like RTRTR floors).\n");

    out("\nThe statistics behind COSCP\n");
    out("---------------------------\n");
    out("The program uses the Poisson model of statistics to represent mathematically the current status of the game.\n");
    out("In this case, the software regists how many times a contestant got (for example) first, third or eigth place\n");
    out("in the whole show or camp.\n\n");
    out("With that information, the program runs a series of simulations using randomization with the percentage of placing a determinated place");
    out("\nObviously, the more a contestant achieves the first place, it tends to win the whole competition.\n");

    out("\nReach out\n");
    out("---------\n");
    out("Are there any problems or bugs? Do you want to contribute to this software?. Write me at @TorreManias on twitter.\n");
}

int principalMenu()
{
    CLEANCONSOLE
    int opc;

    out("1. Register the contestants\n");
    out("2. Exit\n");
    out("> ");

    opc = scanOption();
    return opc;
}

void registMenu ()
{
    CLEANCONSOLE
    out("You have configured this program to save %d contestants\n", NUM_CONTESTANTS);
    out("Let's create them!\n");

    for (int i = 0; i < NUM_CONTESTANTS; i++)
    {
        out("\n------------\n");
        out("Contestant #%d\n", i + 1);
        out("Name: ");

        char name[50];
        in("%s", name);
        strcpy(arrContestant[i].name, name);

        for (int j = 1; j <= NUM_CONTESTANTS; j++)
        {
            out("Times %s got in the position #%i: ", name, j);
            arrContestant[i].placesHistory[j] = scanOption();
        }

        out("%s, successfully registered!", name);
        out("\n------------\n");
    }

    out("Perfect. It is time to run the simulations!\n");
}

void simulationResults ()
{
    CLEANCONSOLE
    WIP
    for (int i = 0; i < NUM_CONTESTANTS; i++)
    {
        out("\n%s, won the show / camp %i times!\n", arrContestant[i].name, arrContestant[i].randomVictories);
    }
}

#endif // MENU_H_INCLUDED
