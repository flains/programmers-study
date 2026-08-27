int solution(int numbers[], int numbers_len)
{
    int max = numbers[0] * numbers[1];
    for(int i = 0; i < numbers_len; i++)
    {
        for(int j = i + 1; j < numbers_len; j++)
        {
            if(numbers[i] * numbers[j] > max)
            {
                max = numbers[i] * numbers[j];
            }
        }
    }
    return max;
}