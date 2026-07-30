#include <stdlib.h>
#include <string.h>

char* solution(const char* my_string)
{
    char* answer = malloc(strlen(my_string) + 1);
    int i = 0, j = 0;
    while(my_string[j])
    {
        if(my_string[j] == 'a' || my_string[j] == 'e' || my_string[j] == 'i' || my_string[j] == 'o' || my_string[j] == 'u')
        {
            j++;
        }
        else
        {
            answer[i++] = my_string[j++];
        }
    }
    answer[i] = '\0';
    return answer;
}