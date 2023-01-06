#include <stdio.h>
#include <string.h>

void edge_detect(int n, int m, int matrix[256][256]);

int main()
{
    int N;
    int n, m;
    int matrix[256][256] = {0};

    while(scanf("%d", &N) != EOF)
    {
        for(int i = 0; i < N; i++)
        {
            memset(matrix, 0, sizeof(matrix));
            scanf("%d %d", &n, &m);
            for(int i = 0; i <= n+1; i++)
            {
                for(int j = 0; j <= m+1; j++)
                {
                    if(i == 0 || i == n+1 || j == 0 || j == m+1)
                        matrix[i][j] = -1;
                }
            }
            for(int j = 1; j <= n; j++)
            {
                for(int k = 1; k <= m; k++)
                {
                    scanf("%d", &matrix[j][k]);
                }
            }
            /*for(int i = 0; i <= n+1; i++)
            {
                for(int j = 0; j <= m+1; j++)
                {
                    printf("%d ", matrix[i][j]);
                }
                printf("\n");
            }*/
            edge_detect(n, m, matrix);
            if(i < N-1)
                printf("\n");
        }
    }

    return 0;
}

void edge_detect(int n, int m, int matrix[256][256])
{
    int i, j;
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= m; j++)
        {
            if(matrix[i][j] == 1)
            {
                if(matrix[i-1][j] == 0 || matrix[i+1][j] == 0 || matrix[i][j-1] == 0 || matrix[i][j+1] == 0)
                {
                    matrix[i][j]+=1;
                }
            }
        }
    }
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= m; j++)
        {
            if(matrix[i][j] == 1 || matrix[i][j] == 0)
                printf("_ ");
            else
                printf("0 ");
        }
        printf("\n");
    }
}