#include <stdio.h>
#include <string.h>

char* solution(char* myString)
{
    for(int i = 0; i < strlen(myString); i++)
    {
        if('B' <= myString[i] && myString[i] <= 'Z')
        {
            myString[i] += 32;
        }
        
        if(myString[i] == 'a')
        {
            myString[i] -= 32;
        }
    }
    return myString;
}