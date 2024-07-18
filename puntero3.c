#include <stdio.h>

int main(void)
{
  /* I define an int variable */
  int intVariable = 0;
  /* I define a pointer type variable */
  int *intVariablePointer = &intVariable;

  /* I print the value of the int variable in the console */
  printf("value of my int variable: %d\n", intVariable);
  /* I print the value of the pointer type variable in the console */
  printf("value of my pointer variable: %ls\n", intVariablePointer);
  /* I print the dereferenced value of the int type variable in the console */
  printf("value of my int variable from my pointer variable: %d", *intVariablePointer);

  /* I exclusively change the value of my int type variable */
  intVariable = 5;

  /* I print the value of the int variable in the console */
  printf("value of my int variable: %d\n", intVariable);
  /* I print the value of the pointer type variable in the console */
  printf("value of my pointer variable: %ls\n", intVariablePointer);
  /* I print the dereferenced value of the int type variable in the console */
  printf("value of my int variable from my pointer variable: %d", *intVariablePointer);
}
