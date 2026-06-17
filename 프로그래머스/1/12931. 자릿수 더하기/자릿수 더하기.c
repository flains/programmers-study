int solution(int n)
{
    int i = 0, tot = 0;
    
    for(i = 0; i < 10; i++)
    {
        tot += n % 10, n /= 10;
    }
    return tot;
}