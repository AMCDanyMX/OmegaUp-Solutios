#include<stdio.h>

int main(){
    
    int a, b, alto;
    char f;
    scanf("%d %c", &alto,&f);

    for(a = 0; a < alto; a++){
      for(b = 0; b < alto; b++){
        if(b <= a){
          printf("%c",f);
        }
        if(b == a){
          printf("\n");
        }
    }
  }

  return 0;
}