#include <stdio.h>
#include <stdbool.h>

int pesquisa_array(int array[], int n, int valor);
int pesquisa_ocorrencia(int array[], int n, int valor);

int main() {
    int array[] = {-5, 7, 8, 7, 10, 15};
    int matriz[];
    int n = 6;
    bool x;
    int valor;
    int total;
    
    int n =2;
   float matrizquadrada[2][2];
    printf("Digite o valor que quer procurar: ");
    scanf("%d", &valor);
    
   for(i =0 ; i< n ; i++){
    for(j=0 ; i<n ; j++){
   	  matrizquadrada[i][j]=i+j;
   }
   }

    x = pesquisa_array(array, n, valor);

    if (x == true) {
        total = pesquisa_ocorrencia(array, n, valor);
        printf("O valor %d aparece %d vezes.\n", valor, total);
    } else {
        printf("O valor %d não existe no array.\n", valor);
    }
    
    while(valor != matrizquadrada){
    	i++
    	if(valor = ma)
	}
    

    return 0;
}

int pesquisa_array(int array[], int n, int valor) {
    for (int i = 0; i < n; i++) {
        if (valor == array[i]) {
            return 1; 
        }
    }
    return 0; 
}

int pesquisa_ocorrencia(int array[], int n, int valor) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        if (valor == array[i]) {
            total++;
        }
    }
    return total;
}

