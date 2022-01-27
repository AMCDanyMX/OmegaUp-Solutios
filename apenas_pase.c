#include<stdio.h>

int main(){
    float pFriends, x, promedioG,materias,sum;
    int n;

    scanf("%f",&pFriends);
    scanf("%f",&materias);
    
    n=0;
    sum = 0.0;
    while (n<materias){
        scanf("%f",&x);
        sum+=x;

        n++;
   }
   
        

    promedioG = sum/materias;
    if(promedioG>pFriends){
        printf("Presume");
    }else{
        printf("Ladra");
    }


    return 0;
}