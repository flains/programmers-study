int solution(const char* s1[], int s1_len, const char* s2[], int s2_len)
{
    int cnt = 0;
    for(int i = 0; i < s1_len; i++)
    {
        for(int j = 0; j < s2_len; j++)
        {
            if(strcmp(s1[i], s2[j]) == 0)
            {
                cnt++;
            }
        }
    }
    return cnt;
}