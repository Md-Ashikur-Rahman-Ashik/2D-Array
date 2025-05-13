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

    if (row != column)
    {
        /* code */
        printf("It isn't a secondary diagonal matrix");
        return 0;
    }

    int notZero = 0;
    int l = column - 1;

    for (int i = 0; i < row; i++)
    {
        /* code */
        for (int j = 0; j < column; j++)
        {
            /* code */
            if (j != l)
            {
                /* code */
                if (integerArray[i][j] != 0)
                {
                    /* code */
                    notZero++;
                }
            }
        }
        l--;
    }

    if (notZero > 0)
    {
        /* code */
        printf("It's not secondary diagonal matrix");
    }
    else
    {
        printf("It's a secondary diagonal matrix");
    }

    return 0;
}