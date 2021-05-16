#include <stdio.h>
#include <stdlib.h>
//#include <string.h>

//Variables
int inputMode = 0; // input format
int outputMode = 0; // output format

int number = 0; // To convert
char hexaStr[] = "ffffff\0"; // default hexa string

//restart loop function
void restartMe()
{
    char quitStr[] = "Hello\0"; // User answer
    printf("\n");
    printf("\nType Yes to start over...\n");
    scanf(" %[^\n]", &quitStr); // important space in scanf() here

    if ((quitStr[0] == 'Y' || quitStr[0] == 'y') && (quitStr[1] == 'E' || quitStr[1] == 'e') && (quitStr[2] == 'S' || quitStr[2] == 's') && quitStr[3] == '\0')
    {
        printf("\n");
        return main();
    }
    else
    {
        printf("\nExiting Converter project...\n");
        return 0;
    }
}

//Decimal to binary calc
int decToBin()
{
    //Test
    return number / 2;
}

// Main function
int main()
{
    inputMode = 0;
    outputMode = 0;
    number = 0;

    printf("-=Starting Converter project=-\n");

    //User inputs
    printf("\nPlease choose initial format to convert (2, 8, 10, or 16): \n");
    scanf(" %d", &inputMode);

    printf("Now choose output format: \n");
    scanf(" %d", &outputMode);

    if ((inputMode != 2 && inputMode != 8 && inputMode != 10 && inputMode != 16) || (outputMode != 2 && outputMode != 8 && outputMode != 10 && outputMode != 16))
    {
        printf("Please enter valid formats: 2, 8, 10, or 16.\n");
        char quitStr[4]; // = "Hello"; // User answer
        scanf("%[^\n]", &quitStr); //Prevents infinite loop in case of invalid (or space using) character.
        printf("\n");
        //printf("\n%s\n", quitStr); // displaying failure typing before going back to main for debug
        return main();
    }

    else
    {
        //switching modes
        switch (inputMode)
        {
            case 2:
                printf("Enter number to convert: \n");
                //
                //switching output mode for calc
                break;
            case 8:
                printf("Enter number to convert: \n");
                //
                //switching output mode for calc
                break;
            case 10:
                printf("Enter number to convert: \n");
                scanf(" %d", &number);
                //switching output mode for calc
                printf("Result: %d", decToBin(number));
                restartMe();
                break; // return in restartMe() function, but will trigger next printf() if there's no break
            case 16:
                printf("Enter number to convert: \n");
                //scanf(" %s", &hexaStr);
                //switching output mode for calc with a string
                break;
        }
    }

    return 0;
}
