#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* solution(int n)
{
    int i = 0;
    char* answer = (char*)calloc((3 * n + 1), sizeof(char));
    for(i = 0; i < n; i++)
    {
        (i % 2) ? strcat(answer, "박") : strcat(answer, "수");
    }
    return answer;
}