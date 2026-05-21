#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    if(n % 2)
    {
        answer = ((n + 1) / 2) * ((n + 1) / 2);
    }
    else
    {
        answer = (n / 2) * ((n / 2) + 1) * (n + 1) * 4 / 6;
    }
    return answer;
}