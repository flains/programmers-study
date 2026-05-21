#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(int a, int d, bool included[], size_t included_len)
{
    int answer = 0, i = 0;
    int arsq[included_len];
    
    for(i = 0; i < included_len; i++)
    {
        arsq[i] = a + d * i;
        
        if(included[i])
        {
            answer = answer + arsq[i];
        }
    }
    
    return answer;
}