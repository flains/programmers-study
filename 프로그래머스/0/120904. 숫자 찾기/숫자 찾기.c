int solution(int num, int k)
{
    int digit = 1, answer = 1, temp = num;
    while (temp >= 10)
    {
        digit *= 10, temp /= 10;
    }
    while (digit > 0)
    {
        if (num / digit == k)
        {
            return answer;
        }
        num %= digit, digit /= 10, answer++;
    }
    return -1;
}