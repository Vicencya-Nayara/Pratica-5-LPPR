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
		printf("Informe o %dº número: ", i + 1);
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
	printf("\nO menor número é: %d\nPosição do menor número: %d\n\n", menor, ind_menor + 1);
	printf("O maior número é: %d\nPosição do maior número: %d", maior, ind_maior +1);
	
	return 0;
}
