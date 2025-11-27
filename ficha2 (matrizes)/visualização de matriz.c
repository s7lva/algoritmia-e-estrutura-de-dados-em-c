#include <stdio.h>
int main()
{
  int i , j , n;
  
  printf("Digite o tamanho da matriz (n):");
  scanf("%d" , &n);
  
  int matriz[n][n];
  
  for(i=0 ; i<n ; i++){
  	for(j=0 ; j<n ; j++){
  		printf("Inserir os valores [%d][%d]: ", i + 1 , j + 1);
  		scanf("%d" , &matriz[i][j]);
	  }
  }
  printf("\n Matriz inserida: \n");
   for(i=0 ; i<n ; i++){
  	for (j=0 ; j<n ; j++){
  		printf("%d\t", matriz[i][j]);
	  }
	  printf("\n ");
  }
     
 
  
  return 0;
  
}










