#include <stdlib.h>
#include <string.h>

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

int* solution(const char* my_string)
{
    int* answer = malloc(strlen(my_string) * sizeof(*answer));
    int cnt = 0;

    for (int i = 0; my_string[i]; i++)
    {
        if ('0' <= my_string[i] && my_string[i] <= '9')
        {
            answer[cnt++] = my_string[i] - '0';
        }
    }

    bs(answer, cnt);
    return answer;
}