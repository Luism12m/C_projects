#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
* main - basic loops
* Return: always 0
*/

int main (void){

  int count = 0;
   while (count <= 5){
    printf("iteracion [%d] hola mundo\n",count);
    count = count + 1;
  }
   
   
   for (count = 0; count <= 5; count++){
     printf("iteracion [%d] hola mundo con for\n",count);
   }
   return 0;
}
