#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* solution(char* my_string, int indices[], size_t indices_len)
{
    int i = 0, j = 0;
    char* answer = (char*)malloc((strlen(my_string) - indices_len + 1) * sizeof(char));
    
    for(i = 0; i < indices_len; i++)
    {
        my_string[indices[i]] = '0';
    }
    
    for(i = 0; i < strlen(my_string); i++)
    {
        if(my_string[i] != '0')
        {
            answer[j++] = my_string[i];
        }
    }
    answer[j] = '\0';
    
    return answer;
}