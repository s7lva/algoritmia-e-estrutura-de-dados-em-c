#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void sort(int n, int vec[]);
void Rsort(int n, int vec[]);

int main(){

	int inf,sup,t,i;
	
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
	for(i=0;i<t;i++){
		printf("\nsort (crescente) > %d",vec[i]);
	}

	Rsort(t,vec);
	for(i=0;i<t;i++){
		printf("\nRsort (decrescente) > %d",vec[i]);
	}
	return 0;
}


void sort(int n, int vec[]){

	int i,j,min,temp;

	for (i=0;i<n-1;i++){

		min=i;
	
		for(j=i+1;j<n;j++){

			if(vec[j]<vec[min]){
				min=j;
			}
		}
		if (min!=i){

			temp=vec[i];
			vec[i]=vec[min];
			vec[min]=temp;
		}

		
	}

}

void Rsort(int n, int vec[]){

	int i,j,min,temp;

	for (i=0;i<n-1;i++){

		min=i;
	
		for(j=i+1;j<n;j++){

			if(vec[j]>vec[min]){
				min=j;
			}
		}

		if (min!=i){

			temp=vec[i];
			vec[i]=vec[min];
			vec[min]=temp;
		}

		
	}

}


