int solution(int hp)
{
    int cnt = 0, i = 0;
    while(hp)
    {
        if(hp >= 5)
        {
            hp -= 5;
        }
        else if(hp >= 3)
        {
            hp -= 3;
        }
        else
        {
            hp -= 1;
        }
        cnt++;
    }
    return cnt;
}