#include <stdio.h>

int main() {
    int numero, suma = 0, cantidad = 0;

    printf("Ingrese un número entero: ");
    scanf("%d", &numero);

    if (numero < 0) {
        numero = -numero; 
    }

    int numero_original = numero; //se guarda el numero

    // Descomposicion del numero
    while (numero > 0) {
        int digito = numero % 10;
        suma += digito;
        cantidad++;
        numero /= 10;
    }

    if (cantidad == 0) {
        printf("El promedio entero de los dígitos es indeterminado (el número es 0).\n");
    } else {
        int promedio = suma / cantidad; // Calcula el promedio entero.
        printf("El promedio entero de los dígitos de %d es: %d\n", numero_original, promedio);
    }

    return 0;
}
