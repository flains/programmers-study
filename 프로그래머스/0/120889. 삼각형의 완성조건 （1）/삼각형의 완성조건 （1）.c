int solution(int sides[], int sides_len)
{
    int m = 0, c = 0, i = 0, s = 0;
    for(i = 0; i < sides_len; i++)
    {
        if(sides[i] > m)
        {
            m = sides[i], c = i;
        }
    }
    for(i = 0; i < sides_len; i++)
    {
        if(i != c)
        {
            s += sides[i];
        }
    }
    return s > m ? 1 : 2;
}