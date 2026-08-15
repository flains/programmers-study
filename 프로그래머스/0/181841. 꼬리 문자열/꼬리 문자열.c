#include <stdlib.h>
#include <string.h>

char* solution(const char* str_list[], int str_list_len, const char* ex)
{
    int len = 0;

    for (int i = 0; i < str_list_len; i++)
    {
        if (strstr(str_list[i], ex) == 0)
            len += strlen(str_list[i]);
    }

    char *answer = calloc(len + 1, sizeof(char));

    int j = 0;

    for (int i = 0; i < str_list_len; i++)
    {
        if (strstr(str_list[i], ex) == NULL)
        {
            strcpy(answer + j, str_list[i]);
            j += strlen(str_list[i]);
        }
    }

    return answer;
}