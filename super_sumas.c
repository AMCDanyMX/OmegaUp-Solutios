#include<stdio.h>

int main(){

    int cp,x,sumatoria,suma;
    scanf("%d",&cp);

    suma = 0;
    while (cp>0){
        scanf("%d",&x);
        
        suma+=x;    
        cp--;
    }

    printf("%d",suma);

    return 0;
}