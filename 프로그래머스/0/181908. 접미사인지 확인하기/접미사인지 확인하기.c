#include <string.h>

int solution(char* my_string, const char* is_suffix)
{
    return strstr(my_string + strlen(my_string) - strlen(is_suffix), is_suffix) ? 1 : 0;
}