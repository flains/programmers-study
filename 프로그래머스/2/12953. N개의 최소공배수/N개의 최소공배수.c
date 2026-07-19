#include <stdlib.h>

int LCM(int a, int b);

int solution(int arr[], int len)
{
    int lcm = 1, i = 0;
    
    for(int i = 0; i < len; i++)
    {
        lcm = LCM(lcm, arr[i]);
    }
    return lcm;
}

int LCM(int a, int b)
{
    int p = a * b;
    
    while (b != 0)
    {
        int temp = a % b;
        a = b;
        b = temp;
    }
    
    return p / a;
}