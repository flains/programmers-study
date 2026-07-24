int n_pf(int n)
{
    int i = 0, j = 1;
    while(j <= n)
    {
        if(n % j++ == 0)
        {
            i++;
        }
    }
    return i;
}

int solution(int n)
{
    return n_pf(n);
}