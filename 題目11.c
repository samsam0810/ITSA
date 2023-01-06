//請設計一程式，輸入一個陣列並且反轉後再輸出

#include <stdio.h>

int main()
{
    int row, col;
    int matrix[256][256] = {0};

    scanf("%d%d", &row, &col);
    for(int i = 0;i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    for(int i = 0; i < col; i++)
    {
        for(int j = 0; j < row-1; j++)
        {
            printf("%d ", matrix[j][i]);
        }
        printf("%d\n", matrix[row-1][i]);
    }
    return 0;
}