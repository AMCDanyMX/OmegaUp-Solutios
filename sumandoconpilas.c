#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>


struct nodo {
    int simbolo;
    struct nodo *sig;
};

struct nodo *raiz=NULL;

void agregar(int x){
    struct nodo *nuevo;
    nuevo = malloc(sizeof(struct nodo));
    nuevo->simbolo = x;
    if (raiz == NULL)
    {
        raiz = nuevo;
        nuevo->sig = NULL;
    }
    else
    {
        nuevo->sig = raiz;
        raiz = nuevo;
    }
    printf("AGREGA" + x);
}


int consumir(){
    if (raiz != NULL)
    {
        int informacion= raiz->simbolo;
        struct nodo *bor = raiz;
        raiz = raiz->sig;
        free(bor);
        return informacion;
    }
    else
    {
        return -1;
    }
    printf("CONSUME");
}

void imprimir(){
    
}


int main(){
    int casos;
    scanf("%d", casos);
    while(casos --){
        scanf("%d", casos);

    }

    
    return 0;
}