#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* my_string, int k)
{
    int a = strlen(my_string), i;

    char* answer = (char*)malloc(a * k + 1);

    for(i = 0; i < k; i++)
    {
        strcpy(answer + i * a, my_string);
    }
    
    answer[a * k] = '\0';

    return answer;
}