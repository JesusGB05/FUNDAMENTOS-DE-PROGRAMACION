#include <stdio.h>

int main() {
    int numero;
    
    printf("Introduce un número: ");
    scanf("%d", &numero);
    
    for (int i = 0; i < numero; i++) {
        printf("*");
    }
    
    printf("\n");
    
    return 0;
}
