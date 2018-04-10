#include "funciones.h"

/** \brief Suma dos enteros.
 *
 * \param Primer entero.
 * \param Segundo entero.
 * \return Resultado de la suma
 *
 */

int suma(int a,int b)
{
   int total;
   total=a+b;
   return total;
}

/** \brief Calcula la resta de dos enteros.
 *
 * \param Primer entero.
 * \param Segundo entero.
 * \return Resultado de la resta
 *
 */

int resta(int a,int b)
{
    int p;
    p=a-b;
    return p;
}

/** \brief Divide dos numeros.
 *
 * \param Primer numero.
 * \param Segundo numero diferente de cero.
 * \return Resultado de la division.
 *
 */

float division(int a,int b)
{
    float q;
    if ( b!=0){
        q = a/b;
    }
    return q;
}

/** \brief Multiplica dos numeros.
 *
 * \param Primer numero.
 * \param Segundo numero.
 * \return Resultado de la multiplicacion.
 *
 */

int multiplicacion(int a, int b)
{
    int r;
    r = a*b;
    return r;
}

/** \brief Calcula el factorial de un numero.
 *
 * \param Numero a calcular.
 * \return Resultado del factorial
 *
 */
int factorial(int a)
{
    int i,m=1;
    for (i=1; i<=a; i++){
        m = m*i;
    }
    return m;
}
