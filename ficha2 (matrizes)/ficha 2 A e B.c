#include <stdio.h>

int main() {
    int i, n;
    float media, soma = 0.0;
    
    int maximo_array =0;
    int minimo_array =0;
    int minima_posicao=0;
    int maxima_posicao =0;
     
    int tamanho = sizeof(vec) / sizeof(vec[0]);
    printf("Digite o numero de elementos: ");
    scanf("%d", &n);

    float vec[n];

    for(i = 0; i < n; i++) {
        printf("Inserir %dº valor: ", i + 1);
        scanf("%f", &vec[i]);
        soma += vec[i];
        printf("Soma = %.2f\n", soma);
    }
    
    for(i = 1 , i > tamanho ; i++)
	{
    	if(vec[0] = maximo_array){
    		maximo_valor = vec[0];
    		maxima_posicao =1;
		}
		if (vec [0] = minimo_array)
		{
			minimo_valor = vec[0];
			minima_posicao = 1;
		}
	}
	
	

    media = soma / n;
    printf("Total: %.2f\n", soma);
    printf("Media: %.2f\n", media);
    
    return 0;
}

