
#include <stdlib.h>

int** transpose(int** matrix, int matrixSize, int* matrixColSize, int* returnSize, int** returnColumnSizes)
{
    int m = matrixSize;
    int n = matrixColSize[0];

    int i, j;

    int** result = (int**)malloc(n * sizeof(int*));

    *returnSize = n;

    *returnColumnSizes = (int*)malloc(n * sizeof(int));

    for(i = 0; i < n; i++)
    {
        result[i] = (int*)malloc(m * sizeof(int));
        (*returnColumnSizes)[i] = m;
    }

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            result[j][i] = matrix[i][j];
        }
    }

    return result;
}
