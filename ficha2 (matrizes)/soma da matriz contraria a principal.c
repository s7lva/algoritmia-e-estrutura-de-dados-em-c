#include <stdio.h>
int main()
{
  int matrizquadrada[2][2];
  int soma =0;
  int i ,j , n;
  
   printf("digite os valores da matriz quuadrada (n):\n");
   scanf("%d" , &n);
  for(i=0 ; i<n ; i++){
  	for(j=0 ; j<n ; j++){
  		printf("matrizquadrada[%d][%d] = ", i, j);
        scanf("%d", &matrizquadrada[i][j]);
	  }
  }
  
  for(i=0 ; i < n ; i++){ 
    //se tivermos uma matriz 4x4 usamos a formula pk calcular a medida da diagnonal contraria seria 4-1-0 / 4-1-1 e por ai vai i=linha e n=numero de termos
  		soma += matrizquadrada[i][1-n-i];
  }
  printf("A soma das diagonais principais e : %.d\n" , soma);
    return 0; 


}
