#include <stdio.h>

int main()
{
    int row, column, countZero = 0;
    scanf("%d %d", &row, &column);

    int integerArray[row][column];

    for (int i = 0; i < row; i++)
    {
        /* code */
        for (int j = 0; j < column; j++)
        {
            /* code */
            scanf("%d", &integerArray[i][j]);
        }
    }

    for (int i = 0; i < row; i++)
    {
        /* code */
        for (int j = 0; j < column; j++)
        {
            /* code */
            if (integerArray[i][j] == 0)
            {
                /* code */
                countZero++;
            }
        }
    }

    if (countZero == (row * column))
    {
        /* code */
        printf("It's a zero matrix");
    }
    else
    {
        printf("It isn't a zero matrix");
    }

    return 0;
}