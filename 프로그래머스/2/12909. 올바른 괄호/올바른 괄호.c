#include <stdbool.h>
#include <string.h>

bool solution(const char* s)
{
    int a = 0, len = strlen(s), i = 0;

    for(i = 0; i < len; i++)
    {
        (s[i] == '(') ? (a++) : (a--);

        if(a < 0)
        {
            return false;
        }
    }
    return a == 0;
}