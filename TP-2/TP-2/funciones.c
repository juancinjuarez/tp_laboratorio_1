#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "funciones.h"

/** \brief Inicializa el estado de todo el array en 0
 *
 * \param pers es el array donde se cargan las personas
 * \param tam es el tamaño del array
 * \return void
 *
 */

void inicializar(EPersona pers[], int tam)
{
    int i;

    for(i=0;i<tam;i++)
    {
        pers[i].estado = 0;
    }
}

/**
 * Obtiene el primer indice libre del array.
 * @param pers el array se pasa como parametro.
 * @param tam es el tamaño del array.
 * @return el primer indice disponible
 */

int obtenerEspacioLibre(EPersona pers[], int tam)
{
    int indice=-1;
    int i=0;

    for(i=0;i<tam;i++)
    {
        if(pers[i].estado == 0)
        {
            indice = i;
            break;
        }
    }
    return indice;
}

/**
 * Obtiene el indice que coincide con el dni pasado por parametro.
 * @param lista el array se pasa como parametro.
 * @param dni el dni a ser buscado en el array.
 * @return el indice en donde se encuentra el elemento que coincide con el parametro dni
 */
int buscarPorDni(EPersona pers[],int tam, int dni)
{
    int i=0;
    int indice = -1;

    for(i=0;i<tam;i++)
    {
        if(pers[i].estado == 1 && pers[i].dni == dni)
        {
            indice = i;
            break;
        }
    }
    return indice;
}

/** \brief Da de alta una persona
 *
 * \param pers es el array donde se cargan las personas
 * \param tam es el tamaño del array
 * \return void
 *
 */

void altaPersona(EPersona pers[], int tam)
{
    int i=0;
    int indice;
    int dni;
    int esta;

    system("cls");
    printf("---Alta Persona---\n\n");

    indice = obtenerEspacioLibre(pers,tam);
    if(indice  == -1)
    {
        printf("No hay lugar para dar de alta una nueva persona!.");
    }
    else
    {
        printf("Ingrese dni:\n");
        scanf("%d",&dni);

        esta = buscarPorDni(pers,tam,dni);
        if(esta != -1)
        {
            printf("El DNI ingresado ya se encuentra cargado.\n");
        }
        else
        {
            printf("Ingrese nombre: \n");
            fflush(stdin);
            scanf("%[^\n]", pers[i].nombre);
            printf("Ingrese edad: \n");
            do
            {
                scanf("%d",&pers[i].edad);
                if(pers[i].edad < 0 || pers[i].edad > 100)
                {
                    printf("Edad incorrecta!. Reingrese:\n");
                }
            }while(pers[i].edad < 0 || pers[i].edad > 100);
            printf("Ingrese DNI: \n");
            do
            {
                scanf("%d",&pers[i].dni);
                if(pers[i].dni < 1000000 || pers[i].dni > 99999999)
                {
                    printf("DNI Incorrecto!!.Reingrese:\n");
                }
            }while(pers[i].dni < 1000000 || pers[i].dni > 99999999);
            pers[i].estado=1;
            system("cls");
            printf("Dato guardado con exito!!!\n");
            system("pause");
        }
    }

}

/** \brief Ordena el array de personas
 *
 * \param pers es el array donde se cargan las personas
 * \param tam es el tamaño del array
 * \return void
 *
 */

void ordenarPorNombre(EPersona pers[], int tam)
{
    int i=0;
    int j=1;
    EPersona aux;

    for(i=0;i<tam-1;i++)
    {
        for(j=i+1;j<tam;j++)
            {
                if(pers[i].estado==1)
                {
                    if(strcmp(pers[i].nombre,pers[j].nombre) > 0)
                    {
                        aux = pers[i];
                        pers[i] = pers[j];
                        pers[j] = aux;
                    }
                }
            }
    }
}

/** \brief Muestra el array de personas ingresadas por el usuario
 *
 * \param pers el array donde se cargan las personas
 * \param tam es el tamaño del array de personas
 * \return void
 *
 */

void mostrarPersonas(EPersona pers[], int tam)
{
    int i=0;

        printf("Nombre:\t\tEdad\tDNI\t\n");
        for(i=0;i<tam;i++)
            {
                if(pers[i].estado == 1)
                    {
                        printf("%s\t\t%d\t%d\n",pers[i].nombre,pers[i].edad,pers[i].dni);
                    }
            }
        system("pause");
}

/** \brief Da de baja a una persona
 *
 * \param pers es el array donde busca la persona a dar de baja
 * \param tam es el tamaño del array
 * \return -
 *
 */

void borrarPersona(EPersona pers[], int tam)
{
    int auxdni=0;
    char confirma;
    int esta;

    printf("---Baja empleado---\n\n");
    printf("Ingrese DNI a borrar:\n");
    scanf("%d",&auxdni);
    esta = buscarPorDni(pers,tam,auxdni);
    if(esta == -1 )
    {
        printf("El DNI %d no se encuentra cargado!.",auxdni);
    }
    else
    {
        do
        {
            printf("Confirmar baja?: s\n");
            scanf("%c",&confirma);
            confirma = tolower(confirma);
        }while(confirma != 's' && confirma != 'n');
        if(confirma == 's')
        {
            pers[esta].estado=0;
            printf("Dato borrado!");
        }
        else
        {
            printf("Dato cancelado!!");
        }
    }
}

/** \brief Imprime grafico de edades
 * \param pers es el array de personas
 * \return 0
 */

int graficoDeEdades(EPersona pers[]){
  int i, hasta18=3, de19a35=5, mayorDe35=7, flag=0, mayor;

    if(hasta18 >= de19a35 && hasta18 >= mayorDe35){
        mayor = hasta18;
    }else{
        if(de19a35 >= hasta18 && de19a35 >= mayorDe35)
        {
            mayor = de19a35;
        }
        else{
        mayor = mayorDe35;
        }
    }

    for(i=mayor; i>0; i--){
        printf("%02d|",i);

        if(i<= hasta18){
            printf("*");
        }
        if(i<= de19a35){
            flag=1;
            printf("\t*");
        }
        if(i<= mayorDe35){
            if(flag==0)
                printf("\t\t*");
            if(flag==1)
                printf("\t*");

        }
        printf("\n");
    }
    printf("--+-----------------");
    printf("\n  |<18\t19-35\t>35");
    printf("\n   %d\t%d\t%d", hasta18, de19a35, mayorDe35);
    system("pause");
    return 0;
}
