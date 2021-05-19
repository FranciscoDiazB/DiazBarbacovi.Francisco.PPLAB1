#ifndef TIPO_H_INCLUDED
#define TIPO_H_INCLUDED

typedef struct
{
    int id;
    char descripcion[20];

}eTipo;

int cargarDescripcionTipo(int id, eTipo tipos[], int tam, char descr[]);

void mostrarTipos(eTipo tipos[], int tam);

void mostrarUnTipo(eTipo unTipo);

#endif // TIPO_H_INCLUDED
