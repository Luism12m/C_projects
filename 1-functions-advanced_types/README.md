Functions and advanced types
Languages - Idiomas English Espaol

English
Topics to take into account in this project
Create and call functions {return type} {name of function} ({input parameters}) Ex: int main (int argc, char *argc) /* you do not need to understand argv and argc */
Pointer variable types, arrays:
char *
int *
Relationship between pointers and arrays
Use header files, implement them, uses.
Concepts
Structure of a function
In the previous exercise we saw how to create a main function following the following structure:

int main(void)

The structure when creating a function looks like this:

{type of value to return} {name of function} ({parameters to receive})
{
  /* function logic here */
  }
  We replace the {} with then we have the structure of our function

Pointers
Essentially a pointer points to an address in memory, that is, the location of a variable, making a simile, a pointer would be the address of your house, and you can know the people inside by visiting the address. You can know the address of the house or see the people inside, clearly the people inside can vary, but the address does not.

Passing it to the C language, I can define a pointer type variable that points to a specific variable, said variable can change its value, and I can still know what it is because the address in memory is the same. Likewise, I can know the value of the address in memory or what the value contained within that address is, this is called 'dereferencing', an example of this could be the following:

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
	    printf("value of my int variable from my pointer variable: %d", *intVarriablePointer);

  /* I exclusively change the value of my int type variable */
    intVariable = 5;

  /* I print the value of the int variable in the console */
    printf("value of my int variable: %d\n", intVariable);
      /* I print the value of the pointer type variable in the console */
        printf("value of my pointer variable: %ls\n", intVariablePointer);
	  /* I print the dereferenced value of the int type variable in the console */
	    printf("value of my int variable from my pointer variable: %d\n", *intVariablePointer);
	    }
	    Aspects to highlight:

To access the memory address of a variable I use the & symbol (ampersand) followed by the name of the variable whose memory address I want to know
We see that to declare a pointer type variable it has the following structure: {data type inside} *{variable name}, where the first type must be the same type of the variable we want to access, in our example both They are of type int. Then follows a * to represent that it is a pointer type and the name we assign to our variable.
We also see that we only change the value of one of the variables, but when printing the value of my pointer variable dereferenced from the pointer, its value is also updated.
Arrays
Arrays in memory of the same type located consecutively, that is, one after another. Let's take variables of type int as an example, and I need 5 consecutive values, that is, I would have an array of type int the size of 5 spaces. In code it would represent something like this:

int array[5];
Now to assign a value to each of the boxes in that allocated memory we could do it as follows:

array[0] = 10;
array[1] = 11;
fixit[2] = 15;
array[3] = 7;
array[4] = 1;
We can observe a peculiar behavior and that is that in the first position we do not use the number 1 to start counting, but rather the 0, the arrangement in position 0 would be our first space; When we talk about positions in memory or in an array we start counting from zero, but it does not mean that there are 0 elements, if you look there are 5 spaces in memory assigned, and since it starts at 0 the last position would be 4  in our example.

We can also do the same thing we did previously in summary:

int array[] = {10, 11, 15, 7, 1};
Which works the same as the lines above. In this case, it is not necessary that we assign a specific size to the array, since the language is capable of inferring it based on the number that we provide. Given that it will be an arrangement of 5 positions exclusively.

To change of each of the positions is the same as the last one as we did above by accessing each of the positions in the array to change the value of the specific position.

Arrays and String
In the last project we touched on the topic of characters, which is an individual memory space that we can represent like this char character = 'h';. What if we want to represent or texts? Well, for that we have what we call strings or chains, but in C we do not have string as such, but we do have an array of characters that we can treat as strings.

To assign a variable as if it were a string we would do it as follows:

char string[];
But there are also many other ways we can deal with it, such as arrays or specifically strings.

char string[] = "Hello world!";
char string2[] = {'H', 'o', 'l', 'a', ' ', 'm', 'u', 'u', 'n', 'd', 'o', ' !', '\0'};
Things to keep in mind:

All strings end in something we call a null character represented like this: \0
We can create and treat a string equal to an array of numbers that we saw previously but we can also create it with double quotes, which
Relationship of arrays and pointers
We have already seen the arrangements we have, how to deal with them, as well as access or positions. So what is the relationship between arrays and pointers?

To make it short, underneath they are the same. To make a more detailed explanation, pointers point to an address in memory, and arrays are a block in memory of the space we need. When we deal with arrays and they are pointers, the pointer points to the first position by default, and if we want to access the next position we have to move the pointer.

We already saw how to declare arrays of numbers and characters. Now we can also declare these same in their pointer form as follows:

char *string = "Hello world!";
int *arrayInt = {1, 2, 3, 4, 5};
Tasks
Create directory called pointers_advances-types
This folder must have a README.md file ` with the description of the topics to be discussed, and a description of the project.

Create a file called 0-print_int_array.c and add the following code:
Create a function called print_int_array that receives as parameters a variable called arrayToPrint of type int * and returns a type int.
Create a loop of any type (while, for) that is responsible for traversing the array.
We are going to access the positions within the arrangement. Use an iterator variable that is responsible for viewing the content within the positions of the array.
Use the printf function to print unstructured integers from the array in the console at the position of the iterator variable we created followed by a line break.
Return the iteration variable
Create a main function that is responsible for calling the function that we previously created.
Create an array of type int of length 5, can be whatever they consider, but
Call the print_int_array function passing it the array we created previously
Return the number 0 in the main function.
Create a file called main.h and add the prototype of the print_int_array function inside
Call said file main.h in the main function.
Espaol
Temas a tener en cuenta en este proyecto
Crear y llamar funciones {return type} {name of function}  ({input parameters}) Ej: int main (int argc, char *argc) /* no neceita entender argv y argc */
Tipos de variables punteros, arreglos:
char *
int *
Relacinnn entre punteros y arreglos
Utilizar header files, implementarlos, usos.
Conceptos
Estructura de una funcinnn
En el ejercicio anterior vimos como crear una funcinnn main siguiendo la siguiente estructura:

int main (void)

La estructura a la hora de crear una funcinnn se parece a esto:

{tipo de valor a retornar} {nombe de la funcinnn} ({par{
      /* lgggica de la funcinnn ac}
      reemplazamos los {} con los valores entonces tenemos la estructura de nuestra funcinnn

Punteros
Esencialmente un puntero apunta a una direccinnn en memoria, es decir la ubicacinnn de una variable, haciendo un s de 5 espacios. En cdddigo lo representarain.h y agrege el prototipo de la funcinnn print_int_array dentro
Llama dicho archivo main.h en la funcinnn main.