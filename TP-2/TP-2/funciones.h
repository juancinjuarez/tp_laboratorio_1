#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

typedef struct {

    char nombre[50];
    int edad;
    int estado;
    int dni;

}EPersona;

int obtenerEspacioLibre(EPersona pers[], int tam);
int buscarPorDni(EPersona pers[], int, int);
void borrarPersona(EPersona pers[], int);
void mostrarPersonas(EPersona pers[], int);
void ordenarPorNombre(EPersona pers[], int);
void inicializar(EPersona pers[],int);
void altaPersona(EPersona pers[], int tam);
int graficoDeEdades(EPersona pers[]);
#endif // FUNCIONES_H_INCLUDED

