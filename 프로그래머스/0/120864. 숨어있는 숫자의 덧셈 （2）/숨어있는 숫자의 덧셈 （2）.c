#include <string.h>
#include <stdlib.h>

int solution(const char* my_string)
{
    int answer = 0, k = 0;
    for(int i = 0; i < strlen(my_string); i++)
    {
        if(0 <= my_string[i] - '0' && my_string[i] - '0' <= 9)
        {
            if(k) k *= 10;
            k += my_string[i] - '0';
        }
        else answer += k, k = 0;
    }
    answer += k;
    return answer;
}