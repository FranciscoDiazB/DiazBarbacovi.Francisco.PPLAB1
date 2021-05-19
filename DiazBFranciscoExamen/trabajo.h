#include "fecha.h"
#include "moto.h"
#include "tipo.h"
#include "color.h"
#include "servicios.h"

#ifndef TRABAJO_H_INCLUDED
#define TRABAJO_H_INCLUDED

typedef struct
{
    int idTra;
    int idBicicleta;
    int idServicio;
    eFecha fecha;
    int isEmpty;

}eTrabajo;

void inicializarTrabajo(eTrabajo trabajo[], int tam);
int buscarLibreTrabajo(eTrabajo trabajo[], int tam);
int altaTrabajo(eTrabajo trabajo[], int tamTra, eMoto motos[], int tam, eTipo tipos[], int tamTi, eColor colores[], int tamC, eServicio servicio[], int tamS, int* pNextId);
int mostrarTrabajos(eTrabajo trabajos[], int tamTra, eMoto motos[], int tam, eServicio servicio[], int tamS);
void mostrarUnTrabajo(eTrabajo unTrabajo, eMoto motos[], int tam, eServicio servicio[], int tamS);

#endif // TRABAJO_H_INCLUDED
