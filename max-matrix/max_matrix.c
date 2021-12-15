#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(void)
{

    int question[3][3] = {1, 2, 3, 2, 6, 9, 8, 3, 7};

    int x = 1, y = 1;
    int max = question[x][y];
    // for (int i = 0; i < 4;i++){
    max = question[x][y + 1] > max ? question[x][y + 1] : max;
    max = question[x - 1][y] > max ? question[x - 1][y] : max;
    max = question[x + 1][y] > max ? question[x + 1][y] : max;
    max = question[x][y - 1] > max ? question[x][y + 1] : max;

    question[x][y] = max;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", question[i][j]);
        }
        printf("\n");
    }
    // }
}