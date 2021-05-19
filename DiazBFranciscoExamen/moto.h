#include "color.h"
#include "tipo.h"


#ifndef MOTO_H_INCLUDED
#define MOTO_H_INCLUDED

typedef struct
{
    int id;
    char marca[20];
    int idTipo;
    int idColor;
    int cilindrada;
    int isEmpty;

}eMoto;

void inicializarMotos(eMoto motos[], int tam);

int buscarLibreMoto(eMoto motos[], int tam);

int altaMoto(eMoto motos[], int tam, eColor colores[], int tamC, eTipo tipos[], int tamT, int* pId);

int mostrarMotos(eMoto motos[], int tam, eTipo tipos[], int tamT, eColor colores[], int tamC);

void mostrarUnaMoto(eMoto unaMoto, eTipo tipos[], int tamT, eColor colores[], int tamC);

int buscarMoto(eMoto motos[], int tam, int idMoto);

int modificarMoto(eMoto motos[], int tam, eColor colores[], int tamC, eTipo tipos[], int tamT);

int bajaMoto(eMoto motos[], int tam, eColor colores[], int tamC, eTipo tipos[], int tamT);

int cargarMarcaMoto(int id, eMoto motos[], int tam, char marca[]);



#endif // MOTO_H_INCLUDED
