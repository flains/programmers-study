int solution(const char* my_string, const char* is_prefix)
{
    return strncmp(my_string, is_prefix, strlen(is_prefix)) == 0;
}