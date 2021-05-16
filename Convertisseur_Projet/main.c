#include <stdio.h>
#include <stdlib.h>
//#include <string.h>

//Variables
int inputMode = 0; // input format
int outputMode = 0; // output format

int number = 0; // To convert
char hexaStr[] = "ffffff\0"; // default hexa string

//Restart loop function
void restartMe()
{
    char quitStr[] = "Hello\0"; // User answer
    printf("\n");
    printf("\nType 'Yes' to start over, anything else to quit...\n");
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
void decToBin (int number, int resultTab [])
{
    //loop
    int i = 0;
    //int N = (number/2);
    for (i = 0; number > 0; i++)
    {
        resultTab[i] = number%2;
        number = number/2;
    }

    for(i=i-1;i>=0;i--)
    {
        printf("%d", resultTab[i]);
    }
}

////String length
//int strLength (char str [])
//{
//    int i = 0;
//    for (i = 0; str[i] != '\0'; i++)
//    {
//
//    }
//    return i;
//}
//
////Displaying any string
//void displayStr (char str [])
//{
//    int i = 0;
//    for (i = 0; i < strLength(str); i++)
//    {
//        printf("%c", str[i]);
//    }
//}
//
////String reverse
//void strReverse (char str [], char newStr [])
//{
//    int i =0;
//    int j = strLength(newStr)-1;
//
//    for (i = 0; str[i] != '\0'; i++)
//    {
//        newStr[j] = str[i];
//        j--;
//    }
//}

//Main function
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

    //Returning to main() for easy testing purpose
    if ((inputMode != 2 && inputMode != 8 && inputMode != 10 && inputMode != 16) || (outputMode != 2 && outputMode != 8 && outputMode != 10 && outputMode != 16))
    {
        printf("Please enter valid formats: 2, 8, 10, or 16.\n");
        char quitStr[4]; // = "Hello"; // See below
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
                int tabRes[100];
                int tabInv[100];
                //tabReverse(strRes, tabResInv); // reverse
                printf("Result: ");
                decToBin(number, tabRes); // calc

                //Fixing incorrect input again, and asking to restart
                char quitStr[4];
                scanf("%[^\n]", &quitStr);
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
