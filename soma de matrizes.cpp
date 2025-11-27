#include <stdio.h>
int main()
{
    int i,j,n;
    printf("Dimensão da matriz quadrada: ");
    scanf("%d", &n);
    float a[n][n], b[n][n], result[n][n];
   
   
   
    printf("Inserir os elementos da 1 matriz\n: ");
    for( i = 0; i < n; i++)
    {
    	for( j = 0; j < n; j++){
		
        printf("A[%d][%d] = ", i+1, j+1);
        scanf("%f", &a[i][j]);
    }
    }

    //ler a 2 matriz
        printf("Inserir os elementos da 2 matriz\n: ");
    for( i = 0; i < n; i++){
	
       for( j = 0; j < n; j++){
		
    
        printf("B[%d][%d] = ", i+1, j+1);
        scanf("%f", &b[i][j]);
    }
    }
    
    for( i = 0; i < n; i++){
    	for( j = 0; j < n; j++){
    		result[i][j] = a[i][j] + b[i][j];
	}
	}
    printf("A soma das matrizes é:");
    for( i = 0; i < n; i++){
    	for( j = 0; j < n ; j++){
          printf("%.2f\t" , result[i][j]);
    }
      printf("\n");
    }
   return 0;
   
}

