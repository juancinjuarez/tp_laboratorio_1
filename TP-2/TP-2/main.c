#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "funciones.h"

#define A 3

int main()
{
    char seguir='s';
    int opcion=0;

    EPersona pers[A];

    inicializar(pers,A);

    while(seguir=='s')
    {
        system("cls");
        printf("1- Agregar persona\n");
        printf("2- Borrar persona\n");
        printf("3- Imprimir lista ordenada por  nombre\n");
        printf("4- Imprimir grafico de edades\n");
        printf("5- Salir\n");

        scanf("%d",&opcion);
        system("cls");

        switch(opcion)
        {
            case 1:
                altaPersona(pers,A);
                break;
            case 2:
                borrarPersona(pers,A);
                break;
            case 3:
                ordenarPorNombre(pers,A);
                mostrarPersonas(pers,A);
                break;
            case 4:
                graficoDeEdades(pers);
                break;
            case 5:
                seguir = 'n';
                break;
        }
    }

    return 0;
}
