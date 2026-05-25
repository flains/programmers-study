#include <stdio.h>

int solution(int num_list[], size_t num_list_len)
{
    int odd = 0, even = 0, i = 0;
    
    for(i = 0; i < num_list_len; i++)
    {
        if(i % 2)
        {
            even += num_list[i];
        }
        else
        {
            odd += num_list[i];
        }
    }

    return (odd >= even) ? odd : even;
}