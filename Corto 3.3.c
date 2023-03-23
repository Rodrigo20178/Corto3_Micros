/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i= 1, a = 0, b = 1, count, n;
    printf("Ingrese un número\n");
    scanf ("%d", &n);
    printf("Su serie de Fibonacci es\n");
    while (i <= n)
    {
        printf("%d ", a);
        count = a + b;
        a = b;
        b = count;
        i++;
    }
    return 0;
 
}
