#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int solution(int a, int b)
{
    int answer = 0;
    
    if(abs(a - b) % 2 == 0)
    {
        if(a % 2 == 0) answer = abs(a - b);
        else answer = a * a + b * b;
    }
    else answer = 2 * (a + b);

    return answer;
}