#include <string.h>
#include <stdlib.h>

char* solution(int q, int r, const char* code)
{
    char* answer = (char*)calloc(strlen(code) + 1, 1);
    int k = 0;
    for(int i = 0; i < strlen(code); i++) if(i % q == r) answer[k++] = code[i];
    return answer;
}