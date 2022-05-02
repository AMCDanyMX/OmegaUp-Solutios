#include<iostream>
using namespace std;

int m,n;
int p[100000];
int llave;



int binarySearch(int x) {
    int min = 0;
    int max = 100001 - 1;
    while (min <= max) {
        int valor = min + (max - min) / 2;
        if (p[valor] == x) {
            return valor;
        } else if (p[valor] < x) {
            min = valor + 1;
        } else {
            max = valor - 1;
        }
    }
    return -1;
}

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
        
        int llaves = binarySearch(llave);

        if(elemento == p[i])
    }
    
    


    


}














