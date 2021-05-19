#ifndef COLOR_H_INCLUDED
#define COLOR_H_INCLUDED

typedef struct
{
    int id;
    char nombreColor[20];

}eColor;

int cargarDescripcionColor(int id, eColor colores[], int tam, char descr[]);

void mostrarColores(eColor colores[], int tam);

void mostrarUnColor(eColor unColor);


#endif // COLOR_H_INCLUDED
