#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int start_num, int end_num)
{
    int i = 0, j = 0;
    int* answer = (int*)malloc((start_num - end_num + 1) * sizeof(int));
    
    for(i = start_num; i >= end_num; i--)
    {
        answer[j++] = i;
    }
    return answer;
}