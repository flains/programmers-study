#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int* solution(long long n)
{
    int a, i;
    char temp[21];

    sprintf(temp, "%lld", n);

    a = strlen(temp);

    int* answer = (int*)malloc(sizeof(int) * a);

    for(i = 0; i < a; i++)
    {
        answer[a - i - 1] = temp[i] - '0';
    }

    return answer;
}