#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* solution(const char* code)
{
    int len = strlen(code), i = 0, j = 0, k = 0;
    char* answer = (char*)malloc(len);
    while(code[i] != '\0')
    {
        if(code[i] != '1')
        {
            if(i % 2 == k % 2)
            {
                answer[j] = code[i];
                j++;
            }
            i++;
        }
        else
        {
            i++, k++;
        }
    }
    answer[j] = '\0';
    if(strlen(answer) == 0)
    {
        answer = "EMPTY";
    }
    return answer;
}