#include <stdio.h>
#include <string.h>

int solution(int i, int j, int k)
{
    int answer = 0;

    for(int n = i; n <= j; n++)
    {
        char buf[7];
        sprintf(buf, "%d", n);

        for(int m = 0; m < strlen(buf); m++)
        {
            if(buf[m] - '0' == k)
            {
                answer++;
            }
        }
    }
    return answer;
}