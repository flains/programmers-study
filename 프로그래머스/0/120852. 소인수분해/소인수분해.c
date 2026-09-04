#include <stdlib.h>

int* solution(int n)
{
    int* answer = (int*)malloc(80);
    int k = 0, i = 2;
    
    while(i <= n)
    {
        if(!(n % i))
        {
            n /= i;
            if(k == 0)
            {
               answer[k++] = i; 
            }
            else
            {
                if(answer[k - 1] != i)
                {
                    answer[k++] = i;
                }
            }
        }
        else
        {
            i++;
        }
    }
    return answer;
}