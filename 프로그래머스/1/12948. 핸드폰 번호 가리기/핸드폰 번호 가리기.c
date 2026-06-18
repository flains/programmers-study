char* solution(char* phone_number)
{
    int len = strlen(phone_number) - 4;
    
    for(int i = 0; i < len; i++)
    {
        phone_number[i] = '*';
    }
    return phone_number;
}