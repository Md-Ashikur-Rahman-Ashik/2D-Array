#include <stdio.h>

int main()
{
    int row, column;
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

    if (row > 1)
    {
        /* code */
        printf("It isn't a row matrix");
    }
    else
    {
        for (int i = 0; i <= 0; i++)
        {
            /* code */
            for (int j = 0; j < column; j++)
            {
                /* code */
                printf("%d ", integerArray[i][j]);
            }
        }
    }

    return 0;
}