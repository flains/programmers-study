#include <stdio.h>
#include <string.h>

int solution(const char* number)
{
    int i = 0, sum = 0;

    for(i = 0; i < strlen(number); i++)
    {
        sum += number[i] - '0';
    }

    return sum % 9;
}