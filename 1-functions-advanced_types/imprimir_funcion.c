#include <stdio.h>

/**
*main -function parameters int *arrayToPrint,int lenght
*Return : i
*/

int print_int_array (int *arrayToPrint,int lenght)
  
 {
   int i = 0; 
   for (i = 0; i < lenght; i++){
     printf("elemento numero [%d] \n ",arrayToPrint[i]);
    
   }
   return (i);

 }
/**
*main -function parameters
*Return : always 0
*/

int  main (){
  int lenght = 5;
  int array [] = {1,2,3,4,5};
  print_int_array(array,lenght);
  return 0;
}

   
