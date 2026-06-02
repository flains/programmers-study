#include <stdio.h>

long long solution(int a, int b)
{
    return (long long)(a + b) * (abs(b - a) + 1) / 2;
}