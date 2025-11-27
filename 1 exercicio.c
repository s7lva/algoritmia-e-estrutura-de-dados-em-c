	#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int i , n ;
	float media , soma , 
	printf("Digite o numero de elementos");
	scanf("d%" , &n);
	float vec [n];
	soma =0;
	
	printf("FOR loop:");
	for(i=0 ; i<n  , i++)
	{
		print ("inserir %d  valor: ", i+1);
		scanf("%f" , &ver[i]);
		soma = soma + vec[i];
		print("%f " , soma);		
	}
	
	media = (float)soma/n;
	printf("total: %f" , soma);
	printf("Media: %f" , media);
	printf("Media: %2.f" , media);
	
	exit;
