char* solution( char* my_string)
{
    for(int i = 0; i < strlen(my_string); i++)
    {
        if('A' <= my_string[i] && my_string[i] <= 'Z')
        {
            my_string[i] += 32;
        }
        else
        {
            my_string[i] -= 32;
        }
    }
    return my_string;
}