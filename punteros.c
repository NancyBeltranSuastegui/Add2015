#include <stdio.h>
#include <stdlib.h>

int main() {

	int numero_arreglo, contador;
	int *puntero;

	printf ("Tamaño del arreglo/n ");
	scanf("%d", &numero_arreglo);

	puntero = (int*)malloc(sizeof(int)*numero_arreglo);

	for(contador = 0; contador < numero_arreglo; contador++){

		printf("puntero[%d] = ", contador, puntero [contador]);
	}

	free(puntero);
	return 0;
}
