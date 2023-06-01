#include <stdio.h>
#include <stdlib.h>

void main()
{
    int x;
    int y;

    printf("Digite o primeiro numero: ");
    scanf("%d", &x);

    printf("Digite o segundo numero: ");
    scanf("%d", &y);

    if (x <= y)
    {
        printf("O menor valor e o: %d", x);
    }
    else if (x == y)
    {
        printf("Os valores são iguais");
    }
    else
    {
        printf("O menor e o: %d", y);
    }
    return 0;
}
