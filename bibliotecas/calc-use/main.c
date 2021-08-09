#include <stdio.h>
#include "../calc-lib/library.h"

int main() {
    int num1, num2, maximo;
    printf("Entre com dois números para comparar: ");
    scanf("%d %d", &num1, &num2);

    maximo = max(num1, num2);

    printf("O maior número é o %d\n", maximo);
}
