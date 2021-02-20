#include <stdio.h>
#include <conio.h>
#include "filadinamica.h"

int main() {
	FILA f1;
	int elemento, opcao = 0, i;
	
	init(&f1); // Inicializa a fila
	
	while (opcao != 3) {
		system("cls");
		printf("1 - Enfileirar\n2 - Desenfileirar\n3 - Sair\n");
		scanf("%i", &opcao);
	
		if (opcao == 1) {
			printf("Valor a enfileirar: ");
			scanf("%i", &elemento);
			insert(&f1, elemento);
		} 
		else if (opcao == 2) {
			elemento = deletar(&f1);
			if (elemento != -1) {
				printf("Elemento desenfileirado: %i",
						elemento);
				getch();		
			}
		}
		
	}
}

