#include <stdio.h>

int main(){

    int n;

    scanf("%d",&n);

    if(n==0){
        printf("Nulo");
    }
    
    else
        if(n%2==0){
            printf("Par");
        }else{
            printf("Impar");
        }

    

    return 0;
}