int test_x(int x, int y)
{
    while(x % y == 0)
    {
        x /= y;
    }
    
    return x;
}

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}

int solution(int a, int b)
{
    return test_x(b = test_x(b / gcd(a, b), 2), 5) == 1 ? 1 : 2;
}