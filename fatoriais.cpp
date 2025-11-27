#include<stdio.h>

long fatorial (int num);

int main()
{
    int i, num , num1, num2 ;
    int primo;
    printf("inserir numero inteiro: ");
    scanf("%d", &num);
    printf("\n\nFactorial(%d) = %d", num , fatorial(num));
    
    
    if(num==1)
	{
    	printf("\n%d : prime number" , num);
    }else{
    	printf("\n%d : not prime number", num);
	}
     printf("Inserir o numero inteiro(limite inferior): ");
	 scanf("%d" , num1);
	 printf("\n inserir o numero superior (limite superior):");
	 scanf("%d", num2);	
     printf("\n numeros primos no intervalo:");
	 
	for(i=num1 ; i<num2 ; i++){
	 if(primo(i==1) printf("%d\t", i);
	 	
	 	return 0;
	}	
}

long fatorial(int num)
{
    int i;
    unsigned long int fact;
    fact = 1;
    for (i = 2; i <= num; i++);
    fact *= i;
    return(fact);
}

long primo(long num)
{
	int i , np =(int)/num 2;
	//casos particulares
	if(num<2) return 0;
	if(num==2) == return 1;
	
	i=2;
	while((num % i !=0) && (i<= np)){
		i++;
	}
	if(num % i !=0){
		return 1;
	}else{
		return 0;
	}
	
}
