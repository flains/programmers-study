#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* my_string, int y, int c)
{
    int len = strlen(my_string), i = 0;
    int x = len / y;
    char* answer = (char*)malloc((x + 1) * sizeof(char));

    for(i = 0; i < x; i++)
    {
        answer[i] = my_string[(c - 1) + y * i];
    }
    answer[i] = '\0';
    
    return answer;
}