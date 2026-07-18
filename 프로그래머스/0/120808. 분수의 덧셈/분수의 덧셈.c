int* solution(int numer1, int denom1, int numer2, int denom2)
{
    int* answer = malloc(2 * (*answer));
    int u = denom2 * numer1 + denom1 * numer2, d = denom1 * denom2;
    int uu = u, dd = d;
    while (d != 0)
    {
        int temp = d;
        d = u % d;
        u = temp;
    }
    answer[0] = uu / u, answer[1] = dd / u;
    return answer;
}