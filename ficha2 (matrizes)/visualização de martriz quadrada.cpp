#include <stdio.h>
int main()
{
   int i ,j ;
   int n =2;
   float matrizquadrada[2][2];
  
   if(n != (j=i) ){
   
   for(i =0 ; i< n ; i++){
   	for(j=0 ; i<n ; j++){
   	  matrizquadrada[i][j]=i+j;
   }
   }
}else{
	return 0;
}
   

   for(i=0 ; i< n ; i++){
   	for(j=0; j< 	n ; j++){
   		printf("%.2f\t" , matrizquadrada[i][j]);
	   }
	   printf("\n");
   }
    return 0;

}
