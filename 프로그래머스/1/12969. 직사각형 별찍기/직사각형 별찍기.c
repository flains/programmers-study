#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    for(int j = 0; j < b; j++)
    {
        for(int i = 0; i < a; i++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}