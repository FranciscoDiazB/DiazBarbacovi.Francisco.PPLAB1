#ifndef SERVICIOS_H_INCLUDED
#define SERVICIOS_H_INCLUDED

typedef struct
{
    int id;
    char descripcion[25];
    float precio;

}eServicio;

int cargarDescripcionServicio(int id, eServicio servicio[], int tam, char descr[]);

void mostrarServicios(eServicio servicio[], int tam);

void mostrarUnServicio(eServicio unServicio);

int validarIdServicios(int id, eServicio servicios[], int tam);

#endif // SERVICIOS_H_INCLUDED
