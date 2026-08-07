#include <stdlib.h>

int* solution(int n)
{
    int i = 0, j = 1;
    int* answer = (int*)calloc(n, sizeof(int));
    while(j <= n)
    {
        if(n % j++ == 0)
        {
            answer[i++] = j - 1;
        }
    }
    return answer;
}