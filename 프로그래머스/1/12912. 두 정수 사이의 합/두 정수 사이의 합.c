#include <stdio.h>

long long solution(int a, int b)
{
    return (b > a) ? (long long)(a + b) * (b - a + 1) / 2 : (long long)(a + b) * (a - b + 1) / 2;
}