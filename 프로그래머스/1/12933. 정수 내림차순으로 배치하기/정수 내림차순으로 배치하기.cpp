#include <string.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

long long solution(long long n)
{
    int len, i, j, tem;
    char temp[11];
    sprintf(temp, "%lld", n);

    len = strlen(temp);

    for(i = 0; i < len; i++)
    {
        for(j = 0; j < len - i - 1; j++)
        {
            if(temp[j] < temp[j + 1])
            {
                tem = temp[j + 1];
                temp[j + 1] = temp[j];
                temp[j] = tem;
            }
        }
    }

    return atoll(temp);
}