int solution(int cookie[], int cookie_len)
{
    int m = 0, a = 0, b = 0, max = 0, l = 1, r = 0;

    for(m = 0; m < cookie_len - 1; m++)
    {
        l = 1, r = 0, a = cookie[m + r], b = cookie[m + l];

        while(1)
        {
            if(a == b && a > max)
            {
                max = a;
            }

            if(a >= b)
            {
                if(m + l >= cookie_len - 1)
                {
                    break;
                }

                b += cookie[m + ++l];
            }
            else
            {
                if(m + r < 1)
                {
                    break;
                }

                a += cookie[m + --r];
            }
        }
    }

    return max ? max : 0;
}