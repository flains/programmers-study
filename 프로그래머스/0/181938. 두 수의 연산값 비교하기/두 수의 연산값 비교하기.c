#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(int a, int b)
{
    int answer = 0, la, aaa;
    char aa[10], bb[10], ab[10], ba[10];
    
    sprintf(aa, "%d", a), sprintf(bb, "%d", b);
    la = strlen(aa);
    
    strcpy(ab, aa), strcpy(ab + la, bb);
    
    if(atoi(ab) > 2 * a * b)
    {
        answer = atoi(ab);
    }
    else
    {
        answer = 2 * a * b;
    }
    
    return answer;
}