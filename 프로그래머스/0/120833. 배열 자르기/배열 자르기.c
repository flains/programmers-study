#include <stdlib.h>

int* solution(int numbers[], size_t numbers_len, int num1, int num2)
{
    int* answer = (int*)malloc((num2 - num1 + 1) * sizeof(*answer));
    
    for(int i = 0, j = num1; i < num2 - num1 + 1; i++)
    {
        answer[i] = numbers[j++];
    }
    return answer;
}