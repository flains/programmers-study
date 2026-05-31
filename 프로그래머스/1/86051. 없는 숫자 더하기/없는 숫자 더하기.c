#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int numbers[], size_t numbers_len)
{
    int answer = 45, i = 0;
    for(i = 0; i < numbers_len; i++)
    {
        answer -= numbers[i];
    }
    return answer;
}