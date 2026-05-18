#include <stdio.h>

int main()
{
    char str1[11];
    int i, n;

    scanf("%s %d",str1, &n);

    for(i = 0; i < n; i++)
    {
        printf("%s", str1);
    }

    return 0;
}