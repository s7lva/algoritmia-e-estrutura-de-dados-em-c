#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	char texto[1000],ch,temp;
	int i , j,min,n,count=0;
	printf("Texto: ");
	gets (texto);
	printf("Caracter a pesquisar: ");
	scanf("%c", &ch);
	for(j=0 ; texto[j]  != '\0' ; j++)
	  if(ch==texto[j])
	     count++;
	printf("O caracter %c ocorre %d vezes" , ch,count);
	
	return 0;
	
	}





