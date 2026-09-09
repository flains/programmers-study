
int solution(int num_list[], int num_list_len)
{
    int answer = 0;
    if(num_list_len > 10)
    {
        for(int i = 0; i < num_list_len; i++)
        {
            answer += num_list[i];
        }
    }
    else
    {
        answer = 1;
        for(int i = 0; i < num_list_len; i++)
        {
            answer *= num_list[i];
        }
    }
    return answer;
}