#include<stdio.h>

int main(){

    int n;
    float promedio,x,sumacalif;
    n=0;
    sumacalif=0.0;
    while(n<5){
        scanf("%f",&x);


        sumacalif+=x;

        n++;
    }

    promedio = sumacalif/5;
    printf("%.2f",promedio);






    return 0;