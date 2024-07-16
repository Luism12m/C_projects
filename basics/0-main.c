#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
* main - basic usage of c language
* Return: always 0
*/

int main(void){
  int number = 10;
  char letter = 'z';
  char letter2 = 90;
  double number2 = 1.2;
  int randomNumber = rand() % 101;
    
  printf("My variable of int type is : %i, and memory space is : %li bytes\n",number,sizeof(number));
  printf("My variable of char typeis : %c, and memory space is : %li bytes\n",letter,sizeof(letter));
  printf("My variable of char ASCII type is : %c, and memory space is : %li bytes\n",letter2,sizeof(letter2));
  printf("My variable of double type is : %.1f, and memory space is : %li bytes\n",number2,sizeof(number2));
  printf("M variable random is : %i, and memory space is : %li bytes\n",randomNumber,sizeof(randomNumber));
}
