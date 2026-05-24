#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num_list[], size_t num_list_len)
{
    int i = 0, j = 0, a = 0;
    
    for(i = 0; i < num_list_len; i++)
    {
        a = num_list[i];
        
        while(a != 1)
        {
            if(a % 2)
            {
                a = (a - 1) / 2 , j++;
            }
            else
            {
                a /= 2, j++;
            }
        }
    }
    return j;
}