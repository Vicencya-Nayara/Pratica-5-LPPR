#include <stdio.h>
#include <locale.h>

int main(){
	setlocale (LC_CTYPE, "Portuguese_Brazil");
	int maior = -100000;
	int menor = 100000; 
	int numero[10];
	int ind_maior;
	int ind_menor;

	
	for(int i= 0; i < 10; i++){
		printf("Informe o %d� n�mero: ", i + 1);
		scanf("%d", &numero[i]);
		if(maior < numero[i]){
			maior = numero[i];
			ind_maior = i;
		}
		if(menor > numero[i]){
			menor = numero[i];
			ind_menor = i;
		}
	}
	printf("\nO menor n�mero �: %d\nPosi��o do menor n�mero: %d\n\n", menor, ind_menor + 1);
	printf("O maior n�mero �: %d\nPosi��o do maior n�mero: %d", maior, ind_maior +1);
	
	return 0;
}
