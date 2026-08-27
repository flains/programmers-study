#include <string.h>
#include <stdlib.h>

char* solution(const char* rsp)
{
    char* answer = (char*)calloc(strlen(rsp) + 1, 1);
    for(int i = 0; i < strlen(rsp); i++)
    {
        if(rsp[i] == '0')
        {
            answer[i] = '5';
        }
        else if(rsp[i] == '2')
        {
            answer[i] = '0';
        }
        else
        {
            answer[i] = '2';
        }
    }
    return answer;
}