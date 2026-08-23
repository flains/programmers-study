#include <stdlib.h>

void bs(int* arr, int count)
{
    for (int i = 0; i < count - 1; i++)
    {
        for (int j = 0; j < count - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int* solution(int num_list[], size_t num_list_len)
{
    bs(num_list, num_list_len);
    int* answer = (int*)malloc((num_list_len - 5) * 4);
    for(int i = 0; i < num_list_len - 5; i++)
    {
        answer[i] = num_list[i + 5];
    }
    return answer;
}