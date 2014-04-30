#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand((unsigned) time(NULL));

    int a, j, k, f;
    int b[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    char c[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '\0'};
    printf("==========================\n== Generador de codigos ==\n==========================\n\n*- Ingrese 1 si quiere generar un codigo\n");
    scanf("%i", &a);
    printf("\n====================================================\n\n");

    k = 0;
    f = 0;
    char letra[5];
    int numero[5];

    if (a != 1)
    {
        printf("Necesitas ingresar el numero 1 para generar un codigo\n");
    }

    if (a == 1)
    {
        for(j=0; j < 5; j++)
        {
            k = 1 + rand() % 23;
            letra[j] = c[k];
        }

        f = 0;

        for(j=0; j < 5; j++)
        {
            f = 1 + rand() % 9;
            numero[j] = b[f];
        }

        printf("Su codigo es:\n\n");

        printf("%c%d%c%d%c%d%c%d%c%d \n\n====================================================\n\n", letra[0], numero[0], letra[1], numero[1], letra[2], numero[2], letra[3], numero[3], letra[4], numero[4]);
    }

    return 0;
}
