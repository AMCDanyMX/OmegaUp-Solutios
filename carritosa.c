#include <stdio.h>

void intercambiar(int *a, int *b) {
  int temporal = *a;
  *a = *b;
  *b = temporal;
}

void quicksort(int arreglo[], int izquierda, int derecha) {
  if (izquierda < derecha) {
    int indiceParticion = particion(arreglo, izquierda, derecha);
    quicksort(arreglo, izquierda, indiceParticion);
    quicksort(arreglo, indiceParticion + 1, derecha);
  }
}

int particion(int arreglo[], int izquierda, int derecha) {
  int pivote = arreglo[izquierda];
  while (1) {
    while (arreglo[izquierda] < pivote) {
      izquierda++;
    }
    while (arreglo[derecha] > pivote) {
      derecha--;
    }
    if (izquierda >= derecha) {
      return derecha;
    } else {//Nota: yo sé que el else no hace falta por el return de arriba, pero así el algoritmo es más claro
      intercambiar(&arreglo[izquierda], &arreglo[derecha]);
      izquierda++;
      derecha--;
    }
  }
}




int main(void) {

    int cantidadCarros, carro[1600];
    
    for(int i=0; i<= cantidadCarros; i++){
        scanf("%d", &carro);
    }
    
    int longitud = sizeof carro / sizeof carro[0];

    quicksort(carro, 0, longitud - 1);

    printf("Imprimiendo arreglo despues de ordenar...\n");
    for (int x = 0; x < longitud; x++){
        printf("%d ", carro[x]);
    }
    return 0;
}