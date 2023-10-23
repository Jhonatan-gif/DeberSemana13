#include <stdio.h>

int main()
{
    int fib1 = 0, fib2 = 1, fib3 = 1;
    int count = 0;

    while (fib3 <= 2000)
    {
        if (fib3 >= 1000)
        {
            count++;
        }

        fib1 = fib2;
        fib2 = fib3;
        fib3 = fib1 + fib2;
    }

    printf("La cantidad de elementos de la serie de Fibonacci entre 1000 y 2000 es: %d\n", count);

    return 0;
}