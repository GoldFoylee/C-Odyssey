#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows, cols, i, j, k = 0;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int **M = (int **)malloc(rows * sizeof(int *));
    for (i = 0; i < rows; i++)
        M[i] = (int *)malloc(cols * sizeof(int));

    printf("Enter matrix elements (%d x %d):\n", rows, cols);
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
            scanf("%d", &M[i][j]);

    int *A = (int *)malloc(rows * cols * sizeof(int));
    int *JA = (int *)malloc(rows * cols * sizeof(int));
    int *IA = (int *)malloc((rows + 1) * sizeof(int));
    IA[0] = 0;

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (M[i][j] != 0) {
                A[k] = M[i][j];
                JA[k] = j;
                k++;
            }
        }
        IA[i + 1] = k;
    }

    printf("\nMatrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++)
            printf("%d ", M[i][j]);
        printf("\n");
    }

    printf("\nA  = [ ");
    for (i = 0; i < k; i++) printf("%d ", A[i]);
    printf("]\n");

    printf("JA = [ ");
    for (i = 0; i < k; i++) printf("%d ", JA[i]);
    printf("]\n");

    printf("IA = [ ");
    for (i = 0; i < rows + 1; i++) printf("%d ", IA[i]);
    printf("]\n");

    for (i = 0; i < rows; i++)
        free(M[i]);
    free(M);
    free(A);
    free(JA);
    free(IA);

    return 0;
}
