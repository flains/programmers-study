#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b, bool flag) {
    int answer = a - b;
    if(flag)
    {
        answer = a + b;
    }
    return answer;
}