#include <stdio.h>

const int lim = 10;

void main(){
    int n[lim],k;
    for(k=0;k<lim;k++){
        printf("Insira um numero do vetor: ");
        scanf("%d", &n[k]);
    }
    printf("O vetor inserido foi:\n");
    for(k=0;k<lim;k++){
        printf("%3d",n[k]);
    }
}