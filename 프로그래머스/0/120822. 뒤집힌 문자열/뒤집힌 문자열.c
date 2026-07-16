#include <stdio.h>
#include <stdlib.h>

char* solution(const char* my_string)
{
    char* answer = malloc(strlen(my_string) + 1);
    
    for(int i = 0; i < strlen(my_string); i++)
    {
        answer[i] = my_string[strlen(my_string) - i - 1];
    }
    
    answer[strlen(my_string)] = '\0';
    
    return answer;
}