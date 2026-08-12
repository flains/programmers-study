#include <stdlib.h>

int* solution(int num_list[], int num_list_len, int n)
{
    int len = (num_list_len % n) ? num_list_len / n + 1 : num_list_len / n;
    int* answer = (int*)malloc(4 * len);
    for(int i = 0; i < len; i++)
    {
        answer[i] = num_list[i * n];
    }
    return answer;
}