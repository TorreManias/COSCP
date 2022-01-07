#include <stdio.h>
#include <stdlib.h>
#include "contestant.h"
#include "menu.h"

void runSimulations ()
{
    CLEANCONSOLE
    WIP
}

int main()
{
    startMenu();
    HIT_CONTINUE
    getchar();

    int opc = principalMenu();

    switch(opc)
    {
        case 1:
            registMenu();
            HIT_CONTINUE
            runSimulations();
            simulationResults();
            break;

        case 2:
            out("Greetings and salutations!\n");
            out("\t - MePhone4\n");
            return EXIT_SUCCESS;
            break;

        default:
            out("Invalid option.\n");
    }
    return 0;
}
