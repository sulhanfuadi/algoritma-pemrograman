#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N,i,x,F,H;
    scanf("%d",&N);
    int T[N];
    for(i = 0;i < N;i++){
        scanf("%d",&T[i]);
    }

    F=0;

    printf("Frieren:");
    for(i=0;i<N;i++){
        if(T[i]>=150){
            break;
        }
        else if(T[i]%5 == 0 && T[i]!=0){
            F++;
            printf(" %d",T[i]);
        }
    }
    printf("\n");


    H=0;
    printf("Himmel:");
    for(i=0;i<N;i++){
        if(T[i]>=100){
            break;
        }
        int Faktor = 0;
        for(x=1;x<=T[i];x++){
            if(T[i]%x==0){
                Faktor++;
            }
        }
        if(Faktor == 2 && T[i]!=5){
            H++;
            printf(" %d",T[i]);
        }
    }
    printf("\n");

    if(F > H){
        printf("Frieren menang!");
    }
    else if (F == H){
        printf("Seri!");
    }
    else{
        printf("Himmel menang!");
    }


    return 0;
}