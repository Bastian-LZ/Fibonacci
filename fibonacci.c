#include <stdio.h>



int main(){

   int fibonacci,n,cont;

    int val1 = 0;

    int val2 = 1;

   printf("Ingresa el numero de la sucesion de Fibonacci que quieres obtener:\n");

   scanf("%d",&n);
   
   printf("Sucesion:\n");
   
   if(n == 0)
      printf("0");
   else{
      if(n == 1)
         printf("0, 1");
      else{
         printf("0, 1");
         for(cont=0;cont<n;cont++){

             fibonacci = val1 + val2;

             printf("%d\n",fibonacci);

             val1 = val2;

             val2 = fibonacci;
         }
      }
   }

   return 0;
   //comit de prueba
}
