#include <stdio.h>

/**
*main -function parameters
*Return : always 0
*/

int print_int_array (int *arrayToPrint,int lenght)
 {
   for (lenght = 0; lenght <= 5; lenght++){
     printf("elemento numero [%d] \n ",arrayToPrint[lenght]);
    
   }
   return 0;
 }
int  main (){
  int array [] ={1,2,3,4,5};
  int result = print_int_array(array);
    return 0;
}

   
