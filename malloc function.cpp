#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int numbers;
	
	printf("Indique o valor do conjunto de numeros");
	scanf("%d" , &numbers);
	
	int *tamanho = malloc(numeros sizeof(int));
	
	if(tamanho == NULL){
		printf("A memoria falhou");
	}
	
	for(int i ; i <numbers ; i++){
		printf("Introduza os valores do ponteiro #%d" i +1);
		scanf("%d" , tamanho[i]);
	}
	
	for (int i ; i<numbers ; i++){
		printf("%d" array_final[i]);
	}
	
	free(grades);
	tamanho = NULL ;
	
	return 0;
	
}
