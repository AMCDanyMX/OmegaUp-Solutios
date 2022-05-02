#include <stdio.h>

int m,n;
int p[100000];
int llave;

int main(){
    int i, j;
    //Entrada
    scanf("%d", &m);
    for(i=0; i<= m; i++){
        scanf("%d", &p[i]);
    }
    scanf("%d", &n);
    for(i=0; i<=n; i++){
        scanf("%d", &llave);
        for(j=0; j<m; j++){
            if(p[j] == llave){ //si encontre la llave en la posicion j 
                break; //salte del ciclo for 
            }
        }
        //al salir del ciclo for j debo determinar si encontre la llave o no
        if(j==m){
            printf("0 "); //no encontre la llave
        }
        else{
            printf("%d", j+1);
        }
    }
    printf("\n");

    
    return 0;
}

