#include <stdlib.h>

int* solution(int num_list[], int num_list_len)
{
    int* answer = calloc(2, sizeof(int));

    for(int i = 0; i < num_list_len; i++)
    {
        (num_list[i] % 2) ? answer[1]++ : answer[0]++;
    }
    
    return answer;
}