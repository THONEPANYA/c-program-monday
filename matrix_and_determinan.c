#include <stdio.h>

int matrix[2][2];
int i, j, det;

int main(int argc, char const *argv[])
{
    // input matrix
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("Enter number[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // show matrix normal
    printf("\n---------Matrix------------\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // find determinant
    det = matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
    printf("\nDeterminant of matrix = %d\n", det);

    return 0;
}
