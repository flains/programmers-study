#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
int* solution(int arr[], size_t arr_len, int** queries, size_t queries_rows, size_t queries_cols)
{
    int* answer = (int*)malloc(sizeof(int) * arr_len);
    int i = 0, a = 0, b = 0, temp = 0;
    answer = arr;

    for(i = 0; i < queries_rows; i++)
    {
        a = queries[i][0], b = queries[i][1];

        temp = answer[a];
        answer[a] = answer[b];
        answer[b] = temp;
    }
    return answer;
}