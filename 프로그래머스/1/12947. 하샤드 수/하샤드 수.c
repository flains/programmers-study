#include <stdbool.h>

bool solution(int x)
{
    int i = 0, tot = 0, o = x;
    for(i = 0; i < 7; i++)
    {
        tot += x % 10, x /= 10;
    }
    return (o % tot) ? false : true;
}