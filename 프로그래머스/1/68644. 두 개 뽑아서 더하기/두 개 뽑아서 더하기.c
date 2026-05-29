#include <stdio.h>
#include <stdlib.h>

int* solution(int numbers[], size_t numbers_len)
{
    int i, j, k = 0, size = numbers_len * (numbers_len - 1) / 2, temp;
    int* answer = (int*)malloc(size * sizeof(int));
    int* r_answer = (int*)malloc(size * sizeof(int));
    

    for(i = 0; i < numbers_len; i++)
    {
        for(j = i + 1; j < numbers_len; j++)
        {
            answer[k++] = numbers[i] + numbers[j];
        }
    }
    
    for(i = 0; i < size; i++)
    {
        for(j = 0; j < size - i - 1; j++)
        {
            if(answer[j] > answer[j + 1])
            {
                temp = answer[j];
                answer[j] = answer[j + 1];
                answer[j + 1] = temp;
            }
        }
    }
    
    for(i = 0; i < size - 1; i++)
    {
        if(answer[i] != answer[i + 1])
        {
            r_answer[j++] = answer[i];
        }
    }
    r_answer[j] = answer[i];

    return r_answer;
}