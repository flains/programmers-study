#include <string.h>

int solution(const char* str1, const char* str2)
{ return (strstr(str2, str1) == '\0') ? 0 : 1; }