#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int absolutes[], size_t absolutes_len, bool signs[], size_t signs_len)
{
    int answer = 0, i = 0;
    for(i = 0; i < absolutes_len; i++)
    {
        answer += signs[i] ? absolutes[i] : -absolutes[i];
    }
    return answer;
}