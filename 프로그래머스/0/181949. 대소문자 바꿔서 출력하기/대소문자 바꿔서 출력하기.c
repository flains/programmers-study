#include <stdio.h>
#define LEN_INPUT 20

int main(void) {
    char s1[LEN_INPUT];
    int i;
    scanf("%s", s1);
    
    for(i = 0; i < LEN_INPUT; i++)
    {
        if(s1[i] == '\0')
        {
            break;
        }
        
        if('A' <= s1[i] && s1[i] <= 'Z')
        {
            s1[i] = s1[i] + 32;
        }
        else
        {
            s1[i] = s1[i] - 32;
        }
    }
    
    printf("%s", s1);

    return 0;
}
