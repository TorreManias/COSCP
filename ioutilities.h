#ifndef IOUTILITIES_H_INCLUDED
#define IOUTILITIES_H_INCLUDED

#define in scanf
#define out printf
#define WIP out("\nWIP\n");
#define HIT_CONTINUE out("\nHit the ENTER key to continue: ");

int scanOption ()
{
    int option;
    in("%i", &option);
    return option;
}

/*
BEFORE COMPILING:
Uncomment the line of code that applies to your OS
*/

// LINUX and MAC OS X DISTROS
#define CLEANCONSOLE system("clear");

// WINDOWS (any version running the windows terminal)
// #define CLEANCONSOLE system("cls");


#endif // IOUTILITIES_H_INCLUDED
