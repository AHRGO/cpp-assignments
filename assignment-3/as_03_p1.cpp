//UNIVERSIDADE FEDERAL DO PARANÁ
//VICTOR HUGO FARIAS


#include <stdio.h>

void ex1(){
    //declarar vetor com 10 posições
    //e valores pré estabelicidos
    //fazer um ponteiro percorrer o vetor
    //e ir printando cada valor

    int vet[10];
    int *pvet;

    vet[0]=1;
    vet[1]=2;
    vet[2]=4;
    vet[3]=8;
    vet[4]=16;
    vet[5]=32;
    vet[6]=64;
    vet[7]=128;
    vet[8]=256;
    vet[9]=512;
    pvet = vet; //associa endereço de memória;

    for(int i=0; i<10; i++){
        printf("%d \n", *pvet);
        pvet++;
    }

}


int main(){
    ex1();

    printf("\n");
    return 0;
}