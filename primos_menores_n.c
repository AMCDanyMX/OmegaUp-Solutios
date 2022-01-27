#include<stdio.h>

int main(){

    int i, n, prims[n],p ,nums[n];

    scanf("%d", &n);
    for(i=2; i<n; i++){
        if(nums[i] != 1 || i==2){
            
            printf("%d\n",i);
            for(p=2; (p*i)<n; p++){
                nums[(p*i)] = 1;
            }
        }
    }
    
    return 0;
}