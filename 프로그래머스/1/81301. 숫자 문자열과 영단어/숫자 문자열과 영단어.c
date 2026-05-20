#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define LEN 50

int solution(const char* s)
{
    int a = strlen(s), i, j = 0;
    char temp[LEN];

    for(i = 0; i < a; i++)
    {
        if('0' <= s[j] && s[j] <= '9')
        {
            temp[i] = s[j];

            j++;
        }
        else if(strncmp(s + j, "zero", 4) == 0)
        {
            temp[i] = '0';

            j = j + 4;
        }
        else if(strncmp(s + j, "one", 3) == 0)
        {
            temp[i] = '1';

            j = j + 3;
        }
        else if(strncmp(s + j, "two", 3) == 0)
        {
            temp[i] = '2';

            j = j + 3;
        }
        else if(strncmp(s + j, "three", 5) == 0)
        {
            temp[i] = '3';

            j = j + 5;
        }
        else if(strncmp(s + j, "four", 4) == 0)
        {
            temp[i] = '4';

            j = j + 4;
        }
        else if(strncmp(s + j, "five", 4) == 0)
        {
            temp[i] = '5';

            j = j + 4;
        }
        else if(strncmp(s + j, "six", 3) == 0)
        {
            temp[i] = '6';

            j = j + 3;
        }
        else if(strncmp(s + j, "seven", 5) == 0)
        {
            temp[i] = '7';

            j = j + 5;
        }
        else if(strncmp(s + j, "eight", 5) == 0)
        {
            temp[i] = '8';

            j = j + 5;
        }
        else if(strncmp(s + j, "nine", 4) == 0)
        {
            temp[i] = '9';

            j = j + 4;
        }
        else if(s[j] == '\0')
        {
            i++;

            break;
        }
    }

    temp[i] = '\0';

    return atoi(temp);
}