#include <stdlib.h>

int* solution(int arr[], int arr_len)
{
    int p = 1;
    while(arr_len >= p) p *= 2;
    int* answer = (int*)calloc(p, 4);
    for(int i = 0; i < arr_len; i++) answer[i] = arr[i];
    return answer;
}