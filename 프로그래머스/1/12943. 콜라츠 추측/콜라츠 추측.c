int solution(int n)
{
    int answer = 0, cnt = 0;
    long long num = n;
    
    while(num != 1)
    {
        cnt++;
        if(cnt == 500) return -1;

        (num % 2) ? (num = 3 * num + 1) : (num = num / 2);
    }
    return cnt;
}