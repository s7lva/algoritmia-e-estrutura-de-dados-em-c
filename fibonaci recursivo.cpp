#include <stdio.h>


long long int rfibonacci(int num);
long long int fibonacci_iterativo(int n1 , int n2);

int main(){
	
	int num , n1 , n2 ;

  printf("introduza os valores necessarios");
  scanf("%d", &num);
  
  printf("limite inferior do fibonacci");
  scanf("%d" , &n1);
  
  printf("limite superior do fibonacci");
  scanf("%d" , &n2);
  
  
  printf("\n\nrfibonacci(%d)= %lld" , num , rfibonacci(num));
  printf("\n\fibonacci_iterativo(%d)(%d)= %lld" , num , fibonacci_iterativo(n1, n2));
  
  
  printf("\nFibonacci no intervalo [%d, %d]:\n", n1, n2);
  for(int i=n1 ; i<n2 ; i++){
  	printf("%d == %lld\n" , i , rfibonacci(i));
  }
	
}

long long int rfibonacci(int num){
	
 if (num == 0) return 0;
    if (num == 1) return 1;
    return rfibonacci(num - 1) + rfibonacci(num - 2);
}



long long int fibonacci_iterativo(int n1 , int n2){
	
	int resultado;
	
	for (int i = 0 ; i<n2 ; i++){
		resultado = n1+n2;
	}
	
	return(resultado);
}
