#include <stdio.h>

int main() {
    int numero;
    
    printf("Ingresa un numero entre 0 y 999: ");
    scanf("%d", &numero);
    
    if (numero >= 0 && numero <= 999) {
        
        int centenas = numero / 100;
        int residuo = numero % 100;
        int decenas = residuo / 10;
        int unidades = residuo % 10;
        
        printf("Centenas: %d\n", centenas);
        printf("Decenas: %d\n", decenas);
        printf("Unidades: %d\n", unidades);
    } else {
    
        printf("Numero no valido, ingrese un entre 0 y 999.\n");
    }
    
    return 0;
}
