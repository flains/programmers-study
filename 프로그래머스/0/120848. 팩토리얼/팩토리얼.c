int fact(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * fact(n - 1);
}

int solution(int n)
{
    for(int i = 1; i <= 10; i++)
    {
        if(fact(i) > n)
        {
            return i - 1;
        }
        else if(fact(i) == n)
        {
            return i;
        }
    }
}