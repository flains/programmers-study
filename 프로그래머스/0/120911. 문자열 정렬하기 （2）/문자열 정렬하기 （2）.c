#include <string.h>

void bs(char* arr, int count)
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
char* solution(char* my_string)
{
    for(int i = 0; i < strlen(my_string); i++)
    {
        if('A' <= my_string[i] && my_string[i] <= 'Z')
        {
            my_string[i] += 32;
        }
    }
    bs(my_string, strlen(my_string));
    return my_string;
}