double solution(int numbers[], int numbers_len)
{
    double answer = 0;
    
    for(int i = 0; i < numbers_len; i++)
    {
        answer += numbers[i];
    }
    return answer / numbers_len;
}