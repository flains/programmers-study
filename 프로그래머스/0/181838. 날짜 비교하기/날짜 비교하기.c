int solution(int date1[], int date1_len, int date2[], int date2_len)
{
    if(date1[0] < date2[0]) return 1;
    if(date1[0] > date2[0]) return 0;

    if(date1[1] < date2[1]) return 1;
    if(date1[1] > date2[1]) return 0;

    if(date1[2] < date2[2]) return 1;
    else return 0;
}