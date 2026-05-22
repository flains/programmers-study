#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int start_num, int end_num)
{
    int* answer = (int*)malloc(sizeof(int) * (end_num - start_num + 1));
    int i = 0, j = 0;
    
    for(i = start_num; i < end_num + 1; i++)
    {
        answer[j] = i;
        j++;
    }
    return answer;
}