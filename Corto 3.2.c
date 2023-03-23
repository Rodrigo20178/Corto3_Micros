/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   float a, Celsius;
   printf("Ingrese el valor de la temperatura en Farenheit\n");
   scanf("%f", &a);
   Celsius = (a - 32)*5/9;
   printf("El valor en Celsius es %f", Celsius);
   return 0;
}
