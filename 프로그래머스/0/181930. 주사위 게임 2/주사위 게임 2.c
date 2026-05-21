#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b, int c) {
    int answer = a + b + c;
    
    if(a - b == 0 || b - c == 0 || c - a == 0)
    {
        answer = (answer) * (a * a + b * b + c * c);
    }
    
    if(a == b && b == c)
    {
        answer = answer * 3 * (a * a * a);
    }
    
    return answer;
}