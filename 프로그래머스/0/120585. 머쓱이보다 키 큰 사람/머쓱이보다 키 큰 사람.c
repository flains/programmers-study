
int solution(int array[], int array_len, int height)
{
    int cnt = 0;
    for(int i = 0; i < array_len; i++)
    {
        if(array[i] > height)
        {
            cnt++;
        }
    }
    return cnt;
}