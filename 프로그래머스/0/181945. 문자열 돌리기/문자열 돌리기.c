#include <stdio.h>

int main(void) {
    char s1[50];
    int i;
    
    scanf("%s", s1);
    
    for(i = 0; i < 50; i++)
    {
        if(s1[i] == '\0')
        {
            break;
        }
        
        printf("%c\n", s1[i]);
    }

    return 0;
}
