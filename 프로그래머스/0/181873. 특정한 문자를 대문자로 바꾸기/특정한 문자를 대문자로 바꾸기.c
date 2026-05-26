#include <stdio.h>
#include <string.h>

char* solution(char* my_string, const char* alp)
{
    for(int i = 0; i < strlen(my_string); i++)
    {
        if(my_string[i] == alp[0]) my_string[i] -= 32;
    }
    return my_string;
}