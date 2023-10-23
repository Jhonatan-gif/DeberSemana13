#include <stdio.h>

int main()
{
    int n;
    int i;
    int suma = 0;

    printf ("Ingrese el valor de n : ");
    scanf("%d", &n);//leer numero

    if (n <= 0) {
        printf("El valor de n debe ser un número positivo.\n");
    } else {
        for (i = 1; i <= n; i++) {
            suma += 3 * i;
        }
    
    int promedio = suma / n;

    printf("El promedio entero de los primeros %d múltiplos de 3 es: %d\n", n,
           promedio); //Impresion de datos
    }

    return 0;
}