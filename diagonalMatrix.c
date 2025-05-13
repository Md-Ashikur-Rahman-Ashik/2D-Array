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
        printf("This matrix isn't primary diagonal.");
        return 0;
    }

    int diagonalCount = 0;
    int desiredZero = (row * column) - row;
    int countZero = 0;

    for (int i = 0; i < row; i++)
    {
        /* code */
        for (int j = 0; j < column; j++)
        {
            /* code */
            if (i == j)
            {
                /* code */
                diagonalCount++;
            }
            else if (integerArray[i][j] == 0)
            {
                /* code */
                countZero++;
            }
        }
    }

    if (diagonalCount == row && countZero == desiredZero)
    {
        /* code */
        printf("It's a primary diagonal matrix");
    }
    else
    {
        printf("It's not a primary diagonal matrix");
    }

    return 0;
}