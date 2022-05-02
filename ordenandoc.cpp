#include <stdio.h>

int elems,tc;
int c[100];

int main(){
    int i, j;
    //Entrada
    scanf("%d%d", &elems, &tc);

    for(i=0; i<= elems; i++){
        scanf("%d", &c[i]);
    }
    for(j = 0; j<= elems; j++){
        printf("%d", c[j]);
    }
    
    return 0;
}

