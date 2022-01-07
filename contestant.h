#ifndef CONTESTANT_H_INCLUDED
#define CONTESTANT_H_INCLUDED
#include "showVariables.h"

typedef struct
{
    char name[50];
    /*
    The purpose of the following array is to store the frequency in which
    a single contestant landed in a particular position. Example:

    Camera = {0, 2, 1, 0, 1, 0}}

    The first index is left clear.

    This array is going to increase over time after each randomization.
    */
    int placesHistory[NUM_CONTESTANTS + 1];

    // To store how many times a contestant ended 1st after N randomizations
    int randomVictories;

} Contestant;

// Array to save all our contestants
Contestant arrContestant[NUM_CONTESTANTS];

#endif // CONTESTANT_H_INCLUDED
