#include <stdio.h>

int main() {
    int n;
    
    printf("Introduce el número de renglones: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", i);
        }
        printf("\n");
    }
    
    return 0;
}
