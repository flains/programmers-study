int solution(int n)
{
    return (n % 2) ? (n - 1) * (n + 1) / 4 : n / 2 * (n / 2 + 1);
}