int prime_test(int n)
{
    for(int i = 2; i < n; i++)
    {
        if(!(n % i))
        {
            return 0;
        }
    }

    return 1;
}

int solution(int n)
{
    int answer = 0;

    for(int i = n; i > 1; i--)
    {
        answer += prime_test(i) ? 0 : 1;
    }
    return answer;
}