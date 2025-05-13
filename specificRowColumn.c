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

    // int desiredRow;
    // scanf("%d", &desiredRow);

    // for (int i = desiredRow; i <= desiredRow; i++)
    // {
    //     /* code */
    //     for (int j = 0; j < column; j++)
    //     {
    //         /* code */
    //         printf("%d ", integerArray[i][j]);
    //     }
    // }

    int desiredColumn;
    scanf("%d", &desiredColumn);

    for (int i = desiredColumn; i <= desiredColumn; i++)
    {
        /* code */
        for (int j = 0; j < row; j++)
        {
            /* code */
            printf("%d\n", integerArray[j][i]);
        }
    }

    return 0;
}