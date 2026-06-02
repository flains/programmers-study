#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* s)
{
    int len = strlen(s);
    if(len % 2)
    {
        char* answer = (char*)malloc(2 * sizeof(char));
        answer[0] = s[len / 2];
        answer[1] = NULL;
        return answer;
    }
    else
    {
        char* answer = (char*)malloc(3 * sizeof(char));
        answer[0] = s[len / 2 - 1];
        answer[1] = s[len/ 2];
        answer[2] = NULL;
        return answer;
    }
}