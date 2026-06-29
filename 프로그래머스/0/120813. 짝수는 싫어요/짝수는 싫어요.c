#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int n)
{
    int a = (n % 2) ? n : n - 1;
    int b = (a + 1) / 2;
    int* answer = (int*)malloc(b * sizeof(int));
    
    for(int i = 0; i < b; i++)
    {
        answer[i] = i * 2 + 1;
    }
    
    return answer;
}