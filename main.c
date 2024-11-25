#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lin, col;
    int **matriz;
    scanf("%d", &lin);
    scanf("%d", &col);

    if(lin == 0){
        printf("[matriz vazia]");
    }else{

    matriz = (int **)malloc(lin * (sizeof(int *)));

    for (int i = 0; i < lin; i++)
    {
        matriz[i] = (int *)malloc(col * sizeof(int));
    }

    for (int i = 0; i < lin; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }
    for (int i = 0; i < lin; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d", matriz[i][j]);
            if (j < col - 1)
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    for(int i=0; i<lin; i++){
        free(matriz[i]);

    }
    free(matriz);
    }
    return 0;
}