#include <math.h>
#include <stdio.h>
#include <stdlib.h>

char* solution(int age)
{
    char* answer = (char*)malloc((int)log10(age) + 1);
    sprintf(answer,"%d", age);
    for(int i = 0; i < strlen(answer); i++)
    {
        answer[i] += 49;
    }
    return answer;
}