#include <stdio.h>
#include <stdlib.h>

char* solution(const char* my_string, int index_list[], size_t index_list_len)
{
    char* answer = (char*)malloc((index_list_len + 1) * sizeof(char));
    int i = 0;
    
    for(i = 0; i < index_list_len; i++)
    {
        answer[i] =  my_string[index_list[i]];
    }
    
    answer[i] = '\0';
    return answer;
}