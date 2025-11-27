#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void sort(int n, int vec[]);
int iBinarySearch(int v[], int ini, int fim, int x);
int rBinarySearch(int v[] , int ini , int fim , int x);

int main(){

	int inf,sup,t,i;
    int x_procurar;
	int indice_encontrado; 
	
	srand(time(NULL)); 
	
	printf("indique tamanho do array \n> ");
	scanf("%d",&t);

	int vec[t];
	
	printf("indique limite inferior \n> ");
	scanf("%d",&inf);
	printf("indique limite superior \n> ");
	scanf("%d",&sup);

	for(i=0;i<t;i++){
		vec[i]= inf +((float)rand()/RAND_MAX)*(float)(sup-inf+1);
	}
 
	sort(t,vec);
	
	printf("\nArray Ordenado:\n");
	for(i=0;i<t;i++){
		printf("%d | ",vec[i]);
	}
	
    printf("\n\nQual numero deseja procurar? ");
	scanf("%d", &x_procurar);

	indice_encontrado = iBinarySearch(vec, 0, t - 1, x_procurar);

	if (indice_encontrado != -1) {
		printf("O numero %d foi ENCONTRADO no indice: %d\n", x_procurar, indice_encontrado);
	} else {
		printf("O numero %d NAO foi encontrado no array.\n", x_procurar);
	}
    
    return 0;
}


void sort(int n, int vec[]){
	int i,j,temp;
	for (i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(vec[j]>vec[j+1]){
    			temp=vec[j];
    			vec[j]=vec[j+1];
    			vec[j+1]=temp;
		    }
        }
    }
}

int iBinarySearch(int v[], int ini, int fim, int x) {
 	int meio; 
 	while (ini <= fim) {
 		meio = (ini + fim) / 2;
 		if (v[meio] == x) {
 			return meio; 
 		}
 		else if (v[meio] < x) {
 			ini = meio + 1; 
 		}
 		else { 
 			fim = meio - 1;
 		}
 	}
 	return -1;
}

int rBinarySearch(int v[] , int ini , int fim , int x){
	
	int meio;
	
    if (ini > fim ){
    	return -1;
    	
    	
	int meio = ini + (fim - ini) / 2; //declarar a formula 
        
    if(v [meio] == x){
    	return meio;	
	}
  
    if(v [meio] < x){
    	return rBinarySearch(v , meio+1 , fim , x);
	}
	
	if(v[meio] > x ){
		return rBinarySearch(v ,ini ,  meio-1 , x);
	}
	
	
  return meio ;
    }
}
