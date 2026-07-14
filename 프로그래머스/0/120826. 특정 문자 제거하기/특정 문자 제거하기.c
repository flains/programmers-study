#include <stdlib.h>
#include <string.h>

char* solution(char* my_string, char* letter)
{
    int i = 0, len = strlen(my_string), j = 0;
    char* answer = (char*)malloc((len + 1) * sizeof(char));
    
    for(i = 0; i < len + 1; i++)
    {
        if(my_string[i] != *letter)
        {
            answer[j++] = my_string[i];
        }
    }
    
    answer[j] = '\0';
    
    return answer;
}