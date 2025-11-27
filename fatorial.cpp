 #include <stdio.h>

long fatorial(int num);
int primo(long num);
long long int rfatorial(int n);
int mdc_interativo(int n1 , int n2);
int mdc_recursivo(int n1 , int n2);

int main()
{
    int i, num, num1, num2, n1, n2;

    printf("Inserir numero inteiro: ");
    scanf("%d", &num);

    printf("\n\nFactorial(%d) = %ld", num, fatorial(num));
    printf("\n\nrfactorial(%d) = %lld", num, rfatorial(num));
    
  
    printf("\n\nIndique o valor iterativo n1: ");
    scanf("%d", &n1);
    printf("Indique o valor iterativo n2: ");
    scanf("%d", &n2);
    printf("\n\nmdc_iterativo(%d , %d) = %d", n1 , n2 , mdc_interativo(n1, n2));
    

    printf("\n\nIndique o valor recursivo n1: ");
    scanf("%d", &n1);
    printf("Indique o valor recursivo n2: ");
    scanf("%d", &n2);
    printf("\n\nmdc_recursivo(%d , %d) = %d", n1 , n2 , mdc_recursivo(n1, n2));


    if (primo(num) == 1)
        printf("\n%d : prime number", num);
    else
        printf("\n%d : not prime number", num);


    printf("\n\nInserir o numero inteiro (limite inferior): ");
    scanf("%d", &num1);
    printf("Inserir o numero inteiro (limite superior): ");
    scanf("%d", &num2);

    printf("\nNumeros primos no intervalo:\n");
    for (i = num1; i <= num2; i++)
    {
        if (primo(i) == 1)
            printf("%d\t", i);
    }

    return 0;
}


long fatorial(int num)
{
    int i;
    unsigned long int fact = 1;
    for (i = 2; i <= num; i++)
    {
        fact *= i;
    }
    return fact;
}

// Função fatorial recursiva
long long int rfatorial(int n)
{
    if (n == 0)
        return 1;
    else
        return n * rfatorial(n - 1);
}


int primo(long num)
{
    if (num < 2) return 0;
    if (num == 2) return 1;
    if (num % 2 == 0) return 0;

    for (long i = 3; i * i <= num; i += 2)
    {
        if (num % i == 0)
            return 0;
    }

    return 1;
}


int mdc_interativo(int n1, int n2)
{
    int temp;
    while (n2 != 0)
    {
        temp = n2;
        n2 = n1 % n2;
        n1 = temp;
    }
    return n1;
}


int mdc_recursivo(int n1, int n2)
{
    if (n2 == 0)
        return n1;
    else
        return mdc_recursivo(n2, n1 % n2);
}

