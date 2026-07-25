#include <string.h>
#include <stdlib.h>

char* solution(const char* my_string)
{
    int i = 0, j = 0, len = strlen(my_string);
    char* answer = (char*)calloc(len + 1, 1);
    char* ans = (char*)calloc(len + 1, 1);
    char* temp = (char*)calloc(2, 1);
    strcpy(answer, my_string);
    
    for(i = 0; i < len; i++)
    {
        temp[0] = my_string[i];
        for(j = i + 1; j < len; j++)
        {
            if(temp[0] == my_string[j])
            {
                answer[j] = 1;
            }
        }
    }
    
    for(i = 0, j = 0; i < len; i++)
    {
        if(answer[i] != 1)
        {
            ans[j++] = answer[i];
        }
    }
    return ans;
}