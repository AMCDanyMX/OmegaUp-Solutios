#include <stdio.h>

int main(){

    int edad;

    scanf("%d",&edad);


    if(edad<18){
        printf("No se te permite entrar.\n");
    }
    else if(edad >=18){
        printf("Adelante, pase usted.\n");
    }




    return 0;
}