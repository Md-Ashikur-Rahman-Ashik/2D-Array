#include <stdio.h>

int main()
{
    // int integerArray[3][4];

    // integerArray[1][2] = 10;

    // printf("%d", integerArray[1][2]);

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

    for (int i = 0; i < row; i++)
    {
        /* code */
        for (int j = 0; j < column; j++)
        {
            /* code */
            printf("%d ", integerArray[i][j]);
        }
        printf("\n");
    }

    return 0;
}