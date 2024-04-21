//UNIVERSIDADE FEDERAL DO PARANÁ
//VICTOR HUGO FARIAS

#include <stdio.h>

void ex2(){
    //criar struct de matricula com:
    //numero matricula, nota 1 e nota 2.
    //criar ponteiro pra struct
    //ler atributos do ponteiro
    //printar matricula e media das notas

    struct matricula {
        int num;
        float n1;
        float n2;
    };

    struct matricula matc, *pmatc;
    pmatc = &matc;
    pmatc -> num = 676783452;
    pmatc -> n1 = 41.78;
    pmatc -> n2 = 68.32;

    printf("Matricula: %d; Media: %0.2f", pmatc -> num, ((pmatc -> n1 + pmatc -> n2)/2));

}

int main(){
    ex2();
    
    printf("\n");
    return 0;
}