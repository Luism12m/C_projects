#include <stdio.h>
#include <stdlib.h>
/**
 * int main - receives two parameters
 @param param1:int argc: arguments counter
 @param param2:char *argv[]:array string char
 *Return: always 0.
*/

int main(int argc,char *argv[])
{
  /*crear una variable de tipo arreglo de enteros*/
  int i = 0;
  int *numbers = NULL;
  numbers = malloc(sizeof(int) * (argc - 1));
  for (i = 0; i < argc - 1; i ++){
      numbers [i] = atoi(argv[i + 1]);
      
      
    
    
    

  }  
  

    
  
    return 0;

  }

