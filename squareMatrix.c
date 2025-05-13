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

    if (row == column)
    {
        /* code */
        printf("It's a square matrix");
    }
    else
    {
        printf("It isn't a square matrix");
    }

    return 0;
}