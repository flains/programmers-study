#include <string.h>

int solution( char* myString, char* pat)
{
    for(int i = 0; i < strlen(myString); i++)
    {
        (myString[i] == 'A') ? (myString[i] = 'B') : (myString[i] = 'A');
    }
    return strstr(myString, pat) ? 1 : 0;
}