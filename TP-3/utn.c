#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "utn.h"

/**
 * \brief Solicita un n�mero al usuario y devuelve el resultadO
 * \param mensaje Es el mensaje a ser mostrado
 * \return el n�mero ingresado por el usuario
 *
 */
 float obtenerFloat(char mensaje[])
{
    float auxiliar;
    printf("%s",mensaje);
    scanf("%f",&auxiliar);
    return auxiliar;
}

/**
 * \brief Solicita un n�mero al usuario y devuelve el resultado
 * \param mensaje Es el mensaje a ser mostrado
 * \return el n�mero ingresado por el usuario
 *
 */
 int obtenerInt(char mensaje[])
{
    int auxiliar;
    printf("%s",mensaje);
    scanf("%i",&auxiliar);
    return auxiliar;
}

/**
 * \brief Solicita un caracter al usuario y devuelve el resultado
 * \param mensaje Es el mensaje a ser mostrado
 * \return el caracter ingresado por el usuario
 *
 */
 char obtenerChar(char mensaje[])
{
    char auxiliar;
    printf("%s",mensaje);
    fflush(stdin);
    scanf("%c",&auxiliar);
    return auxiliar;
}

/**
 * \brief Genera un n�mero aleatorio
 * \param desde N�mero aleatorio minimo
 * \param hasta N�mero aleatorio maximo
 * \param iniciar Indica si se trata del primer n�mero solicitado 1 indica que si
 * \return retorna en n�mero aleatorio generado
 *
 */
 char obtenerNumeroAleatorio(int desde , int hasta , int iniciar)
 {
    if(iniciar)
        srand(time(NULL));
    return desde + (rand() % (hasta + 1 - desde));
 }

/**
 * \brief multiplica dos numeros
 * \param a Acepta un numero
 * \param b Acepta un numero
 * \return retorna la multiplicacion de ambos numeros
 *
 */

float multiplicacion(float a, float b)
{
    float mult;
    mult=a * b;
    return mult;
}

 /**
 * \brief resta dos numeros
 * \param a Acepta un numero
 * \param b Acepta un numero
 * \return retorna la resta de ambos numeros
 *
 */

float restar(float a, float b)
{
    float resta;
    resta = a - b;
    return resta;
}

 /**
 * \brief suma dos numeros
 * \param a Acepta un numero
 * \param b Acepta un numero
 * \return retorna la suma de ambos numeros
 *
 */

float sumar(float a, float b)
{
    float suma;
    suma=a + b;
    return suma;
}

 /**
 * \brief divide dos numeros
 * \param a Acepta un numero dividendo
 * \param b Acepta un numero divisor
 * \return retorna la division de ambos numeros
 *
 */

float dividir(float a, float b)
{
    float divi;
    divi=a / b;
    return divi;
}

 /**
 * \brief factoriza un numero
 * \param a Acepta un numero
 * \return retorna el factorial de un numero
 *
 */

float factorial(float a)
{
    float i, fact=1;
    for (i=1 ; i<=a ; i++){
        fact=fact*i;}
    return fact;
}

 /**
 * \brief verifica si el valor recibido es num�rico
 * \param str Array con la cadena a ser analizada
 * \return 1 si es n�merico y 0 si no o es
 *
 */

 int esNumerico(char str[])
{
    int i=0;
    while(str[i] != '\0')
    {
        if(str[i] < '0' || str[i] > '9')
            return 0;
        i++;
    }
    return 1;
}

 /**
 * \brief verifica si el valor recibido es num�rico aceptando flotantes
 * \param str Array con la cadena a ser analizada
 * \return 1 si es n�merico y 0 si no o es
 *
 */

 int esNumericoFlotante(char str[])
{
    int i=0;
    int cantidadPuntos=0;
    while(str[i] != '\0')
    {
        if(str[i] == '.' && cantidadPuntos == 0)
        {
            cantidadPuntos++;
            i++;
            continue;

        }
        if(str[i] < '0' || str[i] > '9')
            return 0;
        i++;
    }
    return 1;
}

 /**
 * \brief verifica si el valor recibido contiene solo letras
 * \param str Array con la cadena a ser analizada
 * \return 1 si contiene solo ' ' y letras y 0 si no lo es
 *
 */

 int esSoloLetras(char str[])
{
    int i=0;
    while(str[i] != '\0')
    {
        if((str[i] != ' ') && (str[i]< 'a' || str[i]> 'z') && (str[i]< 'A' || str[i]> 'Z'))
            return 0;
        i++;
    }
    return 1;
}

 /**
 * \brief verifica si el valor recibido contiene solo letras y n�meros
 * \param str Array con la cadena a ser analizada
 * \return 1 si contiene solo espacio o letras y numeros, y 0 si no lo es
 *
 */

 int esAlfanumerico(char str[])
{
    int i=0;
    while(str[i] != '\0')
    {
        if((str[i] != ' ') && (str[i]< 'a' || str[i]> 'z') && (str[i]< 'A' || str[i]> 'Z') && (str[i]< '0' || str[i]> '9'))
            return 0;
        i++;
    }
    return 1;
}

 /**
 * \brief verifica si el valor recibido contiene solo n�meros, + y -
 * \param str Array con la cadena a ser analizada
 * \return 1 si contiene numeros, espacios y un guion
 *
 */

 int esTelefono(char str[])
{
    int i=0;
    int contadorGuiones=0;
    while(str[i] != '\0')
    {
        if((str[i] != ' ') && (str[i]< '-') && (str[i]< '0' || str[i]> '9'))
            return 0;
        if(str[i]== '-')
            contadorGuiones++;
        i++;
    }
    if(contadorGuiones==1) //Debe tener un solo guion
        return 1;
    return 0;
}

 /**
 * \brief solicita un texto al usuario y lo devuelve
 * \param mensaje Es el mensaje a ser mostrado
 * \param entrada Es el mensaje a ser mostrado
 * \return void
 *
 */
 void obtenerString(char mensaje[],char entrada[])
 {
     printf(mensaje);
     scanf("%s",entrada);
 }

 /**
 * \brief solicita un texto al usuario y lo devuelve
 * \param mensaje Es el mensaje a ser mostrado
 * \param entrada Array donde se cargara el texto ingresado
 * \return 1 si el texto contiene solo letras
 *
 */
 int obtenerStringLetras(char mensaje[],char entrada[])
 {
     char aux[256];
     obtenerString(mensaje,aux);
     if(esSoloLetras(aux))
     {
         strcpy(entrada,aux);
         return 1;
     }
     return 0;
 }

  /**
 * \brief solicita un texto numerico al usuario y lo devuelve
 * \param mensaje Es el mensaje a ser mostrado
 * \param entrada Array donde se cargar� el texto ingresado
 * \return 1 si el texto contiene solo n�meros
 *
 */
int obtenerStringNumeros(char mensaje[],char entrada[])
{
     char aux[256];
     obtenerString(mensaje,aux);
     if(esNumerico(aux))
     {
         strcpy(entrada,aux);
         return 1;
     }
     return 0;
}

  /**
 * \brief solicita un texto numerico al usuario y lo devuelve
 * \param mensaje Es el mensaje a ser mostrado
 * \param entrada Array donde se cargar� el texto ingresado
 * \return 1 si el texto contiene solo n�meros
 *
 */
int obtenerStringNumerosFlotantes(char mensaje[],char entrada[])
{
     char aux[256];
     obtenerString(mensaje,aux);
     if(esNumericoFlotante(aux))
     {
         strcpy(entrada,aux);
         return 1;
     }
     return 0;
}

  /**
 * \brief solicita un numero entero al usuario y lo valida
 * \param solicitudMensaje Es el mensaje a ser mostrado para solicitar el dato
 * \param solicitudMensaje Es el mensaje a ser mostrado en caso de error
 * \return El numero ingresado por el usuario
 *
 */
int obtenerIntValido(char solicitarMensaje[], char errorMensaje[], int limiteInferior, int limiteSuperior)
 {
     char auxStr[256];
     int auxInt;
     while(1)
     {
         if(!obtenerStringNumeros(solicitarMensaje,auxStr))
         {
             printf("%s\n",errorMensaje);
             continue;

         }
         auxInt = atoi(auxStr);
         if(auxInt < limiteInferior || auxInt > limiteSuperior)
         {
             printf("El numero debe se mayor a %i y menor a %i\n", limiteInferior, limiteSuperior);
             continue;

         }
         return auxInt;

    }

 }

  /**
 * \brief limpia el stdin, similar a fflush
 * \param -
 * \return -
 *
 */
 void limpiarStdin(void)
 {
     int c;
     do {
        c = getchar();
     } while(c != '\n' && c != EOF);
 }


  /**
 * \brief solicita un string
 * \param solicitudMensaje Es el mensaje a ser mostrado para solicitar el dato
 * \param solicitudMensaje Es el mensaje a ser mostrado en caso de error
 * \return entradaArray donde se cargara el texto ingresado
 *
 */
 void obtenerStringValido(char solicitarMensaje[], char errorMensaje[], char entrada[])
 {
     while(1)
     {
         if(!obtenerStringLetras(solicitarMensaje,entrada))
         {
            printf("%s\n",errorMensaje);
            continue;
         }
         limpiarStdin();
         break;
     }
 }
