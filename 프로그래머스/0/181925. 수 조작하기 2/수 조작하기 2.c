#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(int numLog[], size_t numLog_len)
{
    char* answer = (char*)malloc(numLog_len);
    int i = 0;
    
    for(i = 0; i < numLog_len - 1; i++)
    {
        if(numLog[i + 1] - numLog[i] == 1)
        {
            answer[i] = 'w';
        }
        else if(numLog[i] - numLog[i + 1] == 1)
        {
            answer[i] = 's';
        }
        else if(numLog[i + 1] - numLog[i] == 10)
        {
            answer[i] = 'd';
        }
        else
        {
            answer[i] = 'a';
        }
    }
    answer[i] = '\0';
    return answer;
}