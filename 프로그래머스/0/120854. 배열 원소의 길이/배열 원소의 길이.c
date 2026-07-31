#include <string.h>
#include <stdlib.h>

int* solution(const char* strlist[], int strlist_len)
{
    int* answer = (int*)malloc(strlist_len * sizeof(*answer));
    for(int i = 0; i < strlist_len; i++)
    {
        answer[i] = strlen(strlist[i]);
    }
    
    return answer;
}