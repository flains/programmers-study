#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* solution(char* myString)
{
    for(int i = 0; i < strlen(myString); i++)
        if('a' <= myString[i] && myString[i] <= 'z') myString[i] -= 32;

    return myString;
}