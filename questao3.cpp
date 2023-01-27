#include <stdio.h>
#include <locale.h>

int main(){
	setlocale (LC_CTYPE, "Portuguese_Brazil");
	
	int PA[10];
	int razao;
	
	printf("Insira o valor inicial da programação aritmética: ");
	scanf("%d", &PA[0]);
	
	printf("Insira o valor da razão:");
	scanf("%d", &razao);
	
	for(int i = 1; i < 10; i++){
		PA[i] = PA[ i - 1] + razao;
	}
	for(int i = 0; i < 10; i ++){
		printf("\n%d", PA[1]);
	}
	return 0;
}
