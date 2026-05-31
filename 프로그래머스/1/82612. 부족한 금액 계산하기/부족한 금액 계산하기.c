#include <stdio.h>

long long solution(int price, int money, int count)
{
    return ((count + 1) * count / 2 * (long long)price - money > 0) ? (count + 1) * count / 2 * (long long)price - money : 0;
}