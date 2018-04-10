#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    int op1;
    int op2;
    int sum,res,div,mul,fac;
    int flag1 = 0, flag2 = 0;

    while (seguir == 's')
    {

        while (flag1 == 0 && flag2 == 0){
            printf("1- Ingresar 1er operando (A=x)\n");
            printf("2- Ingresar 2do operando (B=y)\n");
            break;
        }

        while (flag1 == 1 && flag2 == 0){
            printf("1- Ingresar 1er operando (A=%d)\n", op1);
            printf("2- Ingresar 2do operando (B=y)\n");
            break;
        }

        while (flag1 == 0 && flag2 == 1){
            printf("1- Ingresar 1er operando (A=x)\n");
            printf("2- Ingresar 2do operando (B=%d)\n", op2);
            break;
        }

        while (flag1 == 1 && flag2 == 1){
            printf("1- Ingresar 1er operando (A=%d)\n", op1);
            printf("2- Ingresar 2do operando (B=%d)\n", op2);
            break;
        }


        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n");
        printf("Ingrese una opcion: ");

        scanf("%d",&opcion);
            switch(opcion)
            {
                case 1:
                    printf("Ingrese primer operando: ");
                    fflush(stdin);
                    scanf("%d",&op1);
                    flag1++;
                    system("cls");
                    system("pause");
                    break;
                case 2:
                    printf("Ingrese segundo operando: ");
                    fflush(stdin);
                    scanf("%d",&op2);
                    flag2++;
                    system("cls");
                    system("pause");
                    break;
                case 3:
                    sum=suma(op1,op2);
                    printf("La suma es: %d\n", sum);
                    break;
                case 4:
                    res=resta(op1,op2);
                    printf("La resta es : %d\n", res);
                    break;
                case 5:
                    div=division(op1,op2);
                    printf("La division es: %d\n", div);
                    break;
                case 6:
                    mul=multiplicacion(op1,op2);
                    printf("La multiplicacion es: %d\n", mul);
                    break;
                case 7:
                    fac=factorial(op1);
                    printf("El factorial es: %d\n", fac);
                    break;
                case 8:
                    sum=suma(op1,op2);
                    printf("La suma es: %d\n", sum);
                    res=resta(op1,op2);
                    printf("La resta es : %d\n", res);
                    div=division(op1,op2);
                    printf("La division es: %d\n", div);
                    mul=multiplicacion(op1,op2);
                    printf("La multiplicacion es: %d\n", mul);
                    fac=factorial(op1);
                    printf("El factorial es: %d\n", fac);
                    break;
                case 9:
                    seguir = 'n';
                    break;
            }
    }
    return 0;
}
