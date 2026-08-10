int solution(int array[], int array_len)
{
    int i = 0, j = 0, temp = 0;
    for (int i = 0; i < array_len - 1; i++)
    {
        for (int j = 0; j < array_len - 1 - i; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    return array[array_len / 2];
}