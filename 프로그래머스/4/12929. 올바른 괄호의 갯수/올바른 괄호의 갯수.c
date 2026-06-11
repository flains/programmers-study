long long solution(int num)
{
    long long ans[15] = {1, 1};
    int i = 0, j = 0;
    
    for(i = 2; i <= num; i++)
    {
        for(j = 0; j < i; j++)
        {
            ans[i] += ans[i - j - 1] * ans[j];
        }
    }
    return ans[num];
}