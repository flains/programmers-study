#include <stdlib.h>

char* solution(const char* s)
{
    char* answer = (char*)calloc(strlen(s), 1);
    for(int i = 'a', l = 0; i <= 'z'; i++)
    {
        int k = 0;
        for(int j = 0; j < strlen(s); j++) if(s[j] == i) k++;
        if(k == 1) answer[l++] = i;
    }
    return answer;
}