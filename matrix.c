#include <stdio.h>
#include<stdlib.h>




void multiplyMatrices(int mat1[][10], int mat2[][10], int res[][10], int r1, int c1, int c2) {
    int i, j, k;
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            res[i][j] = 0;
            for (k = 0; k < c1; k++)
                res[i][j] += mat1[i][k] * mat2[k][j];
        }
    }
}


int main()
{
    int r1,r2, c1,c2, matx1[10][10], matx2[10][10], res[10][10];

    int i, j;
    printf("Enter the number of rows and columns for the first matrix: ");
    scanf("%d%d", &r1, &c1);

    printf("Enter the elements of the first matrix: \n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++)
            scanf("%d", &matx1[i][j]);
    }


    printf("Enter the number of rows and columns for the second matrix: ");
    scanf("%d%d", &r2, &c2);

    if (c1 != r2) {
        printf("Matrix multiplication not possible.\n");
        return 0;

    }
    printf("Enter the elements of the second matrix: \n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++)
            scanf("%d", &matx2[i][j]);
    }
    
    
    
    multiplyMatrices(matx1 , matx2, res, r1, c1, c2);

    printf("Resultant matrix after multiplication: \n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++)
            printf("%d\t", res[i][j]);
        printf("\n");
    }



    return 0;
}
