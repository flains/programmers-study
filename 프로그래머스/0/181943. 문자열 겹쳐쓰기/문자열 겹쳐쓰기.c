#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#define LEN 1000

char* solution(const char* my_string, const char* overwrite_string, int s)
{
    int i, a, b;
 
    a = strlen(my_string), b = strlen(overwrite_string);

    char* answer = (char*)malloc(a + 1);
    
    for(i = 0; i < s; i++)
    {
        answer[i] = my_string[i];
    }

    for(i = 0; i < b; i++)
    {
        answer[i + s] = overwrite_string[i];
    }

    for(i = 0; i < a - s - b; i++)
    {
            answer[i + s + b] = my_string[i + s + b];
    }

    answer[a] = '\0';

    return answer;
}

int main()
{
    char str1[LEN], str2[LEN];
    char *str3;
    int s;

    scanf("%s %s", str1, str2);
    scanf("%d", &s);

    str3 = solution(str1, str2, s);

    printf("%s", str3);

    return 0 ;
}