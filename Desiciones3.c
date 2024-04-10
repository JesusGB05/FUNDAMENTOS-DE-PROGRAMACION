#include <stdio.h>

int main() {
    int numero;

    printf("Introduce un número: ");
    if (scanf("%d", &numero) != 1) {
        printf("Por favor, introduce un número válido.\n");
        return 1;
    }

    printf("El número es %s a 5.\n", numero == 5 ? "igual" : (numero < 5 ? "menor" : "mayor"));

    return 0;
}
