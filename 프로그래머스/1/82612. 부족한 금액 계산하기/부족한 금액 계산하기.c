#include <stdio.h>

long long solution(int price, int money, int count)
{
    long long tot = 0;
    for(int i = 0; i < count; i++)
    {
        tot += (i + 1) * price;
    }
    return (tot - money > 0) ? tot - money : 0;
}