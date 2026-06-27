#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int numbers[], int numbers_len)
{
    int* answer = (int*)malloc(numbers_len * sizeof(int));
    int i = 0;
    
    for(i = 0; i < numbers_len; i++)
    {
        answer[i] = numbers[i] * 2;
    }
    
    
    return answer;
}