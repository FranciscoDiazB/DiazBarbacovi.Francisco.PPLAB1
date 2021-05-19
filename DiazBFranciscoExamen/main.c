#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "tipo.h"
#include "color.h"
#include "moto.h"
#include "servicios.h"
#include "trabajo.h"


#define TAMT 4
#define TAMC 5
#define TAMM 10
#define TAMS 4
#define TAMTRA 10

int menu();

int main()
{
    int flag = 0;
    char salir = 'N';
    int nextIdMoto = 300;
    int nextTrabajo = 1500;
    eMoto motos[TAMM];
    eTrabajo trabajos[TAMTRA];
    eTipo tipos[TAMT] = {
        {1000, "Chopera"},
        {1001, "Ciclomotor"},
        {1002, "Enduro"},
        {1003, "Scooter"}
    };
    eColor colores[TAMC] = {
        {10000, "Gris"},
        {10001, "Negro"},
        {10002, "Blanco"},
        {10003, "Azul"},
        {10004, "Rojo"}
    };
    eServicio servicio[TAMS] = {

        {20000, "Limpieza", 250},
        {20001, "Ajuste", 300},
        {20002, "Balanceo", 17},
        {20003, "Cadena", 190}
    };
    inicializarMotos(motos, TAMM);
    inicializarTrabajo(trabajos, TAMTRA);


    do{

        switch(menu()){

            case 'A':
                if(altaMoto(motos, TAMM, colores, TAMC, tipos, TAMT, &nextIdMoto) == 1){
                    printf("\n\nAlta exitosa!!\n\n");
                    flag = 1;
                }
                system("pause");
                break;
            case 'B':
                if(flag == 0){
                    printf("\nPrimero se debe ingresar una moto\n");
                }
                else{
                    if(modificarMoto(motos, TAMM, colores, TAMC, tipos, TAMT)){
                        printf("\n\nModificacion exitosa!");
                    }
                    else{
                        printf("\n\nHubo un problema en la modificacion.");
                    }
                }
                printf("\n\n");
                system("pause");
                break;
            case 'C':
                if(flag == 0){
                    printf("\nPrimero se debe ingresar una moto\n");
                }
                else{
                    if(bajaMoto(motos, TAMM, colores, TAMC, tipos, TAMT)){
                        printf("\n\nBaja exitosa!");
                    }
                    else{
                        printf("\n\nHubo un problema en la baja de la moto.");
                    }
                }
                printf("\n\n");
                system("pause");
                break;
            case 'D':
                if(flag == 0){
                    printf("\nPrimero se debe ingresar una moto\n");
                }
                else{

                    printf("\n\n");
                    if(mostrarMotos(motos, TAMM, tipos, TAMT, colores, TAMC) == 0){
                        printf("\nHubo un problema para mostrar las motos\n");
                }

                }
                printf("\n\n");
                system("pause");
                break;
            case 'E':
                mostrarTipos(tipos, TAMT);
                printf("\n\n");
                system("pause");
                break;
            case 'F':
                mostrarColores(colores, TAMC);
                printf("\n\n");
                system("pause");
                break;
            case 'G':
                mostrarServicios(servicio, TAMS);
                printf("\n\n");
                system("pause");
                break;
            case 'H':
                if(flag == 0){
                    printf("\nPrimero se debe ingresar una moto\n");
                }
                else{
                    if(altaTrabajo(trabajos, TAMTRA, motos, TAMM, tipos, TAMT, colores, TAMC, servicio, TAMS, &nextTrabajo)){
                        printf("\nAlta exitosa!!\n");
                    }
                }
                printf("\n\n");
                system("pause");
                break;

            case 'I':
                if(flag == 0){
                    printf("\nPrimero se debe ingresar una moto\n");
                }
                else{
                        if(mostrarTrabajos(trabajos, TAMTRA, motos, TAMM, servicio, TAMS) == -1){
                        printf("\nHubo un problema para mostrar los trabajos\n");
                    }
                }
                printf("\n\n");
                system("pause");
                break;

            case 'Z':
                printf("\nEsta seguro que desea salir? Oprima una tecla si desea salir\n");
                printf("De lo contrario oprima 'N' (mayuscula)");
                fflush(stdin);
                salir = getchar();
                printf("\n\n");
                break;
            default:
                printf("\n");
                printf("Dato invalido. Reingrese numero");
                system("pause");
                }


        printf("\n\n");

    }
    while (salir == 'N');

    return 0;
}



int menu(){

    char opcion;

    system("cls");
        printf("\n");
        printf("\t\t**** ABM Motos ****");
        printf("\n\n\n");
        printf("A. ALTA MOTO\n");
        printf("B. MODIFICAR MOTO\n");
        printf("C. BAJA MOTO\n");
        printf("D. LISTAR MOTO\n");
        printf("E. LISTAR TIPO\n");
        printf("F. LISTAR COLORES\n");
        printf("G. LISTAR SERVICIOS\n");
        printf("H. ALTA TRABAJO\n");
        printf("I. LISTAR TRABAJO\n");
        printf("Z. SALIDA\n\n\n");

        printf("Ingrese la letra (en mayuscula) la de opcion correspondiente: ");
        fflush(stdin);
        scanf("%c", &opcion);

    return opcion;


}
