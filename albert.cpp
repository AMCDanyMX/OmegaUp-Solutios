#include <stdio.h>
#include <stdlib.h>


int funcionQueCompara(const void *a, const void *b) {
    // Castear a enteros
    int aInt = *(int *) a;
    int bInt = *(int *) b;
    // Al restarlos, se debe obtener un número mayor, menor o igual a 0
    // Con esto ordenamos de manera ascendente
    return aInt - bInt;
}


int main(void) {
    int datos;
    int arreglo[1600];
    int tamanioElemento = sizeof arreglo[0];
    int longitud = sizeof arreglo / tamanioElemento;


    scanf("%d", &datos);

    
    for(int i=0; i<datos; i++){
        scanf("%d", &arreglo[i]);
    }


    qsort(arreglo, longitud, tamanioElemento, funcionQueCompara);

    for (int x = 0; x < longitud; x++) {
        printf("%d ", arreglo[x]);
    }
    return 0;
}