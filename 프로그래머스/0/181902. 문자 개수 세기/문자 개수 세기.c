#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(const char* my_string)
{
    int* answer = (int*)malloc(sizeof(int) * 52);
    int i = 0, len = strlen(my_string);
    
    for(i = 0; i < 52; i++)
    {
        answer[i] = 0;
    }
    
    for(i = 0; i < len; i++)
    {
        if('A' <= my_string[i] && my_string[i] <= 'Z')
        {
            answer[my_string[i] - 'A']++;
        }
        else
        {
            answer[my_string[i] - 'a' + 26]++;
        }
    }
    
    return answer;
}