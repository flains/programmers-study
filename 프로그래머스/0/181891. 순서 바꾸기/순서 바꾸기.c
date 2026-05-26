#include <stdio.h>
#include <stdlib.h>

int* solution(int num_list[], size_t num_list_len, int n)
{
    int i = 0, j = n;
    int* answer = (int*)malloc(num_list_len * sizeof(int));
    for(i = 0; i < num_list_len; i++)
    {
        if(j == num_list_len)
        {
            j = 0;
        }
        answer[i] = num_list[j++];
    }
    return answer;
}