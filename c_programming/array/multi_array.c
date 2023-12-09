#include <stdio.h>

int main(void)
{
    int i, j;
    /* the 1st box is row and the 2nd is column*/
    int matrix[2][3] = {
        {2, 4, 6},
        {3, 5, 7}
    };

    for(i = 0; i < 2; i++) /* Row*/
    {
        for(j = 0; j < 3; j++)/* Column*/
        {
            printf("%d =>", matrix[i][j]);
        }
    }
    printf("\n");

    return(0);
}