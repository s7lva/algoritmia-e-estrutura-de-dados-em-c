#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int pesquisavalor(int alvo, int linhas, int colunas, int matriz[linhas][colunas]);
int ContarOcorrencias(int linhas, int colunas, int matriz[linhas][colunas], int elemento_alvo); 

int main(){
	
	srand(time(NULL));
	
	int i, j;
	int linhas;
	int colunas;
	int valor_procurado;
	int resultado_pesquisa; 
	int resultado_contagem;
	
	
	printf("Indique o numero de linhas (i): "); 
	scanf("%d" , &linhas);
	
	printf("Indique o numero de colunas (j): "); 
	scanf("%d", &colunas);
	
	
	int matriz[linhas][colunas];
	
	
	for (i = 0; i < linhas; i++){
		for(j = 0; j < colunas; j++){
			matriz[i][j] = rand() % 100 + 1;
            printf("Posicao [%d][%d] = %d\n", i, j, matriz[i][j]);
        }
	}
	
	printf("\nQual valor deseja pesquisar na matriz? ");
    scanf("%d", &valor_procurado);
	
	
	resultado_pesquisa = pesquisavalor(valor_procurado, linhas, colunas, matriz);
	
	
	if(resultado_pesquisa == 1){
		printf("\nO valor %d foi encontrado na matriz.\n", valor_procurado);
	}else{
		printf("\nO valor %d não foi encontrado em nenhuma posição da matriz.\n", valor_procurado);
	}
    

    resultado_contagem = ContarOcorrencias(linhas, colunas, matriz, valor_procurado);

    printf("O número total de ocorrências de %d é: %d\n", valor_procurado, resultado_contagem); 
     
	return 0;	
}


int pesquisavalor(int alvo ,int linhas , int colunas, int matriz[linhas][colunas]){
	
	int i, j;
	for(i = 0; i < linhas; i++){
		for (j = 0; j < colunas; j++){
			if(matriz[i][j] == alvo){
				return 1;
			}
		}
	}

   return 0;
}


int ContarOcorrencias(int linhas, int colunas, int matriz[linhas][colunas], int elemento_alvo) {
    int contador = 0;
    

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (matriz[i][j] == elemento_alvo) {
                contador++;
            }
        }
    }
    
    return contador;
}
