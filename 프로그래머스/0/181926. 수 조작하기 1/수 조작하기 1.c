#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(int n, const char* control)
{
    int answer = n, len = strlen(control), i = 0;

    for(i  = 0; i < len; i++)
    {
        if(control[i] == 'w')
        {
            answer += 1;
        }
        else if(control[i] == 's')
        {
            answer -= 1;
        }
        else if(control[i] == 'd')
        {
            answer += 10;
        }
        else
        {
            answer -= 10;
        }
    }

    return answer;
}