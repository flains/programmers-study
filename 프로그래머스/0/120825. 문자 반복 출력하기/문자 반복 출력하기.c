#include <stdlib.h>
#include <string.h>

char* solution(const char* my_string, int n)
{
    char* answer = (char*)malloc((strlen(my_string) * n + 1)* sizeof(char));
    
    for(int i = 0; i < strlen(my_string); i++)
    {
        for(int j = 0; j < n; j++)
        {
            answer[i * n + j] = my_string[i];
        }
    }
    answer[strlen(my_string) * n] = '\0';
    return answer;
}