#include <stdio.h>
#include "main.h"

/**
*main -function parameters int *arrayToPrint,int lenght
*Return : i
*/

int print_int_array (int *arrayToPrint,int lenght)
  
 {
   int i = 0; 
   for (i = 0; i < lenght; i++){
     printf("elemento numero [%d]\n",arrayToPrint[i]);
    
   }
   return (i);

 }

   
