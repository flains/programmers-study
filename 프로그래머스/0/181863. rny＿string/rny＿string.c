#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* rny_string)
{
    int len = strlen(rny_string), i = 0, j = 0, cnt = 0, a = 0;
    char temp;
    
    for(i = 0; i < len; i++)
    {
        if(rny_string[i] == 'm')
        {
            cnt++;
        }
    }
    char* answer = (char*)malloc((len + cnt + 1) * sizeof(char));
    strcpy(answer, rny_string);
    for(i = 0; i < len + cnt; i++)
    {
        if(answer[i] == 'm')
        {
            answer[i] = 'r';
            for(j = len + a++; j > i; j--)
            {
                answer[j + 1] = answer[j];
            }
            answer[i + 1] = 'n';
        }
    }
    answer[i] = '\0';
    return answer;
}