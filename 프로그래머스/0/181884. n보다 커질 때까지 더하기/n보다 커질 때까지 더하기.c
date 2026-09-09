int solution(int numbers[], int numbers_len, int n)
{
    int answer = 0;
    for(int i = 0; i < numbers_len; i++)
    {
        if(answer > n)
        {
            return answer;
        }
        else
        {
            answer += numbers[i];
        }
    }
    return answer;
}