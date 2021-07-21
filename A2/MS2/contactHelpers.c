//==============================================
// Name:           Carmela Isabel Rambacud
// Student Number: 144524204
// Email:          cerambacud@myseneca.ca
// Section:        NEE
// Date:           7/16/2021
//==============================================
// Assignment:     2
// Milestone:      2
//==============================================

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "contactHelpers.h"
// This source file needs to "know about" the functions you prototyped
// in the contact helper header file.
// HINT: Put the header file name in double quotes so the compiler knows
//       to look for it in the same directory/folder as this source file
//       #include your contactHelpers header file on the next line:


//--------------------------------
// Function Definitions
//--------------------------------

// +-------------------------------------------------+
// | ====== Assignment 2 | Milestone 2 =======       |
// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-1 |
// |        empty function definitions below and     |
// |        complete the definitions as per the      |
// |        Milestone-2 specifications               |
// |                                                 |
// | - The clearKeyboard function is done for you    |
// +-------------------------------------------------+


// Clear the standard input buffer
void clearKeyboard(void)
{
    while (getchar() != '\n'); // empty execution code block on purpose
}

// pause: Empty function definition goes here:
void pause(void)
{
    printf("(Press Enter to continue)");
    clearKeyboard();
}

// getInt: Empty function definition goes here:
int getInt(void)
{
    char NL = 'x';
    int value;
    while (NL != '\n')
    {
        scanf("%d%c", &value, &NL);

        if (NL != '\n')
        {
            clearKeyboard();
            printf("*** INVALID INTEGER *** <Please enter an integer>: ");
        }

    }
    return value;
}

// getIntInRange: Empty function definition goes here:
int getIntInRange(int min, int max)
{
    char NL = 'x';
    int value;
    while (NL != '\n')
    {
        value = getInt();
        if (value >= min && value <= max)
        {
            return value;
        }
        else
        {
            printf("*** OUT OF RANGE *** <Enter a number between %d and %d>: ", min, max);
        }

    }
    return value;
}

// yes: Empty function definition goes here:
int yes(void)
{
    char NL = 'x';
    char value;

    while (NL != '\n')
    {
        scanf("%c%c", &value, &NL);

        if (NL != '\n')
        {
            clearKeyboard();
            printf("*** INVALID ENTRY *** <Only (Y)es or (N)o are acceptable>: ");
        }
        else
        {
            if (value == 'Y' || value == 'y' || value == 'N' || value == 'n')
            {
                break;
            }
            else
            {
                NL = 'x';
                printf("*** INVALID ENTRY *** <Only (Y)es or (N)o are acceptable>: ");
            }
        }

    }
    if (value == 'Y' || value == 'y')
        return 1;
    else
        return 0;
    return value;

}

// menu: Empty function definition goes here:
int menu(void)
{
    int value;

    printf("Contact Management System\n");
    printf("-------------------------\n");
    printf("1. Display contacts\n");
    printf("2. Add a contact\n");
    printf("3. Update a contact\n");
    printf("4. Delete a contact\n");
    printf("5. Search contacts by cell phone number\n");
    printf("6. Sort contacts by cell phone number\n");
    printf("0. Exit\n\n");
    printf("Select an option:> ");

    value = getIntInRange(0, 6);
    return value;
}

// contactManagerSystem: Empty function definition goes here:
void contactManagerSystem(void)
{
    int value;
    int tf = 1;
    char YesNo, clear = 0;

    do {

        value = menu();
        if (value == 1) {
            printf("\n<<< Feature 1 is unavailable >>>\n\n");
            pause();
            printf("\n");
        }

        else if (value == 2) {
            printf("\n<<< Feature 2 is unavailable >>>\n\n");
            pause();
            printf("\n");
        }

        else if (value == 3) {
            printf("\n<<< Feature 3 is unavailable >>>\n\n");
            pause();
            printf("\n");
        }

        else if (value == 4) {
            printf("\n<<< Feature 4 is unavailable >>>\n\n");
            pause();
            printf("\n");
        }

        else if (value == 5) {
            printf("\n<<< Feature 5 is unavailable >>>\n\n");
            pause();
            printf("\n");
        }

        else if (value == 6) {
            printf("\n<<< Feature 6 is unavailable >>>\n\n");
            pause();
            printf("\n");
        }

        else if (value == 0) {
            printf("\nExit the program? (Y)es/(N)o: ");
            scanf(" %c%c", &YesNo, &clear);
            printf("\n");
            if (YesNo == 'Y' || YesNo == 'y') {
                printf("Contact Management System: terminated\n");
                tf = 0;
            }
        }
        else {
            tf = 0;
        }

    } while (tf == 1);

}
