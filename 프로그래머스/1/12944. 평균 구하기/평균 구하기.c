double solution(int arr[], int arr_len)
{
    int tot = 0;
    
    for(int i = 0; i < arr_len; i++)
    {
        tot += arr[i];
    }
    return (double)tot / arr_len;
}