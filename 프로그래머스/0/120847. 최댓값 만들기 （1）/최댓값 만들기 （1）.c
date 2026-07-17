int solution(int number[], int numbers_len)
{
    int max = 0;
    
    for(int i = 0; i < numbers_len; i++)
    {
        for(int j = i + 1; j < numbers_len; j++)
        {
            if(number[i] * number[j] > max)
            {
                max = number[i] * number[j];
            }
        }
    }
    return max;
}