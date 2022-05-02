#include <stdio.h>
int cantidadpuertas,c;
int main(){
   scanf("%i", &cantidadpuertas);
   int puertas[100001];
   for(int i=0;i<100002;++i)puertas[i]=0;
   for(int i=0;i<cantidadpuertas;++i)scanf("%i", &c),puertas[c]=i+1;
   scanf("%i", &cantidadpuertas);
   for(int i=0;i<cantidadpuertas;++i)scanf("%i", &c),printf("%i ", puertas[c]);
}