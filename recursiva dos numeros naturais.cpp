#include <stdio.h>

long int somanaturais_recursivo(int n1 , int n2);
long int potencia_recursiva(int base , int expoente);

int main(){
	int n1 , n2 , base , expoente;
	
	printf("insira um numero natural");
	scanf("%d" , &n1);
	
	printf("insira outro numero natural");
	scanf("%d", &n2);
	
	//&ld  used to print signed long integers in C
	printf("A soma dos numeros de %d a %d é : %ld\n" ,n1, n2 ,somanaturais_recursivo(n1, n2));
	
	printf("insira uma base");
	scanf("%d", &base);
	
	printf("insira um expoente");
	scanf("%d", &expoente);
	
	//%d^%d para dois argumentos int
	printf("o valor de %d^%d é: %ld\n" ,base, expoente ,potencia_recursiva(base, expoente));
   return 0;
}


long int somanaturais_recursivo(int n1 , int n2){
		
		if (n1 > n2){
			return 0;
		}else{
			return n1+somanaturais_recursivo(n1 + 1 , n2);
		}
	}
	
long int potencia_recursiva(int base , int expoente){
	
	if(expoente ==0){
		return 1;
	}else{
		return base*potencia_recursiva(base , expoente-1);
	}
}
	
	
	
	

