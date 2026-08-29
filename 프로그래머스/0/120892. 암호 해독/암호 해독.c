#include <string.h>
#include <stdlib.h>

char* solution(const char* cipher, int code)
{
    int len = strlen(cipher), i;
    char *answer = malloc(len / code + 1);
    for (i = 0; i < len / code; i++)
    {
        answer[i] = cipher[(i + 1) * code - 1];
    }
    answer[i] = '\0';

    return answer;
}