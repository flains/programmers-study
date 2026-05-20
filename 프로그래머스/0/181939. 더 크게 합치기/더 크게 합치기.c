#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(int a, int b) {
    int answer = 0, la, lb;
    char aa[10], bb[10], ab[10], ba[10];
    
    sprintf(aa, "%d", a), sprintf(bb, "%d", b);
    
    la = strlen(aa), lb = strlen(bb);
    
    strcpy(ab, aa);
    strcpy(ab + la, bb);
    
    strcpy(ba, bb);
    strcpy(ba + lb, aa);
    
    if(atoi(ab) >= atoi(ba))
    {
        answer = atoi(ab);
    }
    else
    {
        answer = atoi(ba);
    }
    
    return answer;
}