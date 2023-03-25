#include <stdio.h>

int main(){

    int arregloDatos[1600];
    int x, i, d;
    int datos;

    scanf("%d", &datos);

    for(i=0; i<datos; i++){
        scanf("%d", &arregloDatos[i]);
    }

    for(x=0; x<=datos; x++){
        for(i=0, d=1; d<= datos; i++, d++){
            if(arregloDatos[i]>arregloDatos[d]){
                int aux= arregloDatos[d];
                arregloDatos[d] = arregloDatos[i];
                arregloDatos[i]=aux;
            }
        }
    }

    for(x=0; x<=datos;x++){
        printf("%d", arregloDatos[x]);
    }
}