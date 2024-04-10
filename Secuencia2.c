#include <stdio.h>

int main() {
	int segundos, horas, minutos, restante;
	
	printf("Introduce el numero de segundos: ");
	scanf("%d", &segundos);
	
	horas = segundos / 3600;
	restante = segundos % 3600;
	minutos = restante / 60;
	segundos = restante % 60;
	
	printf("Horas = %d, Minutos = %d, Segundos = %d\n", horas, minutos, segundos);
	
	return 0;
}
