#include <stdlib.h>

int* solution(int arr[], int arr_len, int delete_list[], int delete_list_len)
{
    int k = 0;
    int *answer = malloc(arr_len * sizeof(int));

    for (int i = 0; i < arr_len; i++)
    {
        int found = 0;

        for (int j = 0; j < delete_list_len; j++)
        {
            if (arr[i] == delete_list[j])
            {
                found = 1;
                break;
            }
        }

        if (!found)
            answer[k++] = arr[i];
    }
    return answer;
}