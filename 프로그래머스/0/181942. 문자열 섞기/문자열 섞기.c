#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* str1, const char* str2)
{
    int a = strlen(str1), i;

    char* answer = (char*)malloc(2 * a + 1);

    for(i = 0; i < a; i++)
    {
        answer[2 * i] = str1[i];
        answer[2 * i + 1] = str2[i];
    }

    answer[2 * a] = '\0';

    return answer;
}