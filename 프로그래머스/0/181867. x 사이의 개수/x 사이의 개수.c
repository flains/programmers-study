#include <string.h>
#include <stdlib.h>

int* solution(const char* myString)
{
    int len = strlen(myString), k = 0, j = 0;
    int* answer = (int*)malloc((len + 1) * sizeof(int));
    for(int i = 0; i < len; i++) myString[i] == 'x' ? answer[j++] = k, k = 0 : k++;
    answer[j] = k;
    return answer;
}