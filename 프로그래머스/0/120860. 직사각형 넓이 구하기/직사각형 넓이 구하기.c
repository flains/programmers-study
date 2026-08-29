#include <math.h>

int solution(int** dots, int dots_rows, int dots_cols)
{
    int xmin = dots[0][0], xmax = dots[0][0];
    int ymin = dots[0][1], ymax = dots[0][1];

    for (int i = 1; i < 4; i++)
    {
        if (dots[i][0] < xmin) xmin = dots[i][0];
        if (dots[i][0] > xmax) xmax = dots[i][0];

        if (dots[i][1] < ymin) ymin = dots[i][1];
        if (dots[i][1] > ymax) ymax = dots[i][1];
    }

    return (xmax - xmin) * (ymax - ymin);
}