int solution(int array[], int array_len, int n)
{
    int answer = 0;
    for(int i = 0; i < array_len; i++)
    {
        if(array[i] == n)
        {
            answer++;
        }
    }
    return answer;
}