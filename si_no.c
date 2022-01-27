#include <stdio.h>

int main(){

    int a,b,c;

    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    if(a == b){
        printf("Si\n");
    }
    else if(a==c){
        printf("Si\n");
    }

    else if(b==c){
        printf("Si\n");
    }

    else
    {
        printf("No\n");
    }
    
    




    return 0;