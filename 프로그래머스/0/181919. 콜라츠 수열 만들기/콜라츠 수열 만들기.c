#include <stdio.h>
#include <stdlib.h>

int* solution(int n)
{
    int size = 2, count = 0;
    int* answer = (int*)malloc(size * sizeof(int));
    
    while(n != 1)
    {
        if(count == size)
        {
            size *=2;
            answer = (int*)realloc(answer, size * sizeof(int));
        }
        
        answer[count++] = n;
        n = (n % 2) ? (3 * n + 1) : (n / 2);
    }
    
    answer[count] = 1;
    return answer;
}