#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num_list[], size_t num_list_len)
{
    int i, j = 0, k = 0;
    int num1 = 0, num2 = 0;
    int odd[10], even[10];
    
    for(i = 0; i < num_list_len; i++)
    {
        if(num_list[i] % 2)
        {
            odd[j++] = num_list[i];
        }
        else
        {
            even[k++] = num_list[i];
        }
    }
    
    for(i = 0; i < j; i++)
    {
        num1 = 10 * num1 + odd[i];
    }
    
    for(i = 0; i < k; i++)
    {
        num2 = 10 * num2 + even[i];
    }
    
    return num1 + num2;
}