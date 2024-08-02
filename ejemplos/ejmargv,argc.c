#include <stdio.h>

int main(int argc, char *argv[])
{
  int i = 0;

  printf("argument count: %d\n", argc); /* 3 */
    for (i = 0; i < argc; i++)
      {
	printf("arguments: %s\n", argv[i]);
      }

  return(0);
}
