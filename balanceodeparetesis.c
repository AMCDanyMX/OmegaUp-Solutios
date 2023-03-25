#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct nodo {
    char simbolo;
    struct nodo *sig;
};

struct nodo *raiz=NULL;

void insertar(char x){
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
}


char extraer(){
    if (raiz != NULL)
    {
        char informacion= raiz->simbolo;
        struct nodo *bor = raiz;
        raiz = raiz->sig;
        free(bor);
        return informacion;
    }
    else
    {
        return -1;
    }
}

void cargarFormula(char *formula){
    gets(formula);
}

int verificarBalanceada(char *formula){
    int f;
    for (f=0;f<strlen(formula);f++)
    {
        if (formula[f]=='(')
        {
            insertar(formula[f]);
        }
        else
        {
            if (formula[f]==')')
            {
                if (extraer()!='(')
                {
                    return 0;
                }
            }
        }
    }
}


int main()
{
    char formula[1000000];
    char expresion;
    int cantidadE;

    scanf("%d", &cantidadE);

    for(int i=0; i<= cantidadE; i++){
        cargarFormula(formula);
    }

    for(int j=0; j< cantidadE; j++){
        if(verificarBalanceada(formula)){
            printf("SI");
        }else{
            printf("NO");
        }
    }
}