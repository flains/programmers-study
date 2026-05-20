#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* arr[], size_t arr_len)
{
    int i;
    char* answer = (char*)malloc(arr_len + 1);

    for(i = 0; i < arr_len; i++)
    {
        answer[i] = arr[i][0];
    }

    answer[arr_len] = '\0';

    return answer;
}