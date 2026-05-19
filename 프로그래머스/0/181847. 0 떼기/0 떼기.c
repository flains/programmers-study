#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* n_str)
{
    int a = strlen(n_str), i = 0;

    while(n_str[i] == '0')
    {
        i++;
    }

    char* answer = (char*)malloc(a - i + 1);

    strcpy(answer, n_str + i);

    return answer;
}