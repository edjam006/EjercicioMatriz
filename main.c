#include "stdio.h"
int main(int argc, char const *argv[])
{   
    int filas, columnas;
    printf("Ingrese el tamaño de la matriz en i filas\n");
    scanf("%d", &filas );
    printf("Ingrese el tamaño de la matriz en j columnas\n");
    scanf("%d", &columnas );
    int matriz [filas][columnas];
    for (int i= 0; i < filas; i++){
        for (int j= 0; j < columnas; j++){
        matriz[i][j]= 0;
        }
        
    }
     for ( int i= 0; i < filas && i < columnas; i++){
        matriz[i][i]= 1; 
        
    }

    for (int i= 0; i < filas; i++){
        for (int j= 0; j < columnas; j++){
        printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
