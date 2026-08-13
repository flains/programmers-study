#include <stdlib.h>

int* solution(int array[], int array_len)
{
    int* answer = (int*)calloc(2, 4);
    for(int i = 0; i < array_len; i++)
    {
        if(array[i] > answer[0])
        {
            answer[0] = array[i], answer[1] = i;
        }
    }
    return answer;
}