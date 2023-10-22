// MOSTRAR EN PANTALLA TODOS LOS ENTEROS COMPRENDIDOS ENTRE 1 Y 100
#include <stdio.h>

int main()
{
    int num;//numero declarado

    for (int num = 1; num <= 100; num++)//inicializacion del ciclo for
    {
        printf("%d\n", num);//impresion
    }

    return 0;
}