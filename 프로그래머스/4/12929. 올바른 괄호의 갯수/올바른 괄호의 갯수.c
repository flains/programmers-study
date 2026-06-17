typedef __int128 int128;

int128 fact(int n)
{
    int128 res = 1;
    for(int i = 1; i <= n; i++)
    {
        res *= i;
    }
    return res;
}

long long solution(int n)
{
    return fact(2 * n) / (fact(n) * fact(n)) - fact(2 * n) / (fact(n + 1) * fact(n - 1));
}