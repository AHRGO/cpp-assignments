// INSTITUIÇÃO: Universidade Federal do Paraná
// DISCIPLINA:  ESTRUTURA DE DADOS 1
// NOME:        VICTOR HUGO FARIAS

#include <iostream>
#include <stdio.h>
#include <fstream>
#include <stdlib.h>
#include <cstdlib>
#include <string>
#include "tela.h"

using namespace std;

void le_arquivo(string path){

    ifstream arquivo;
    arquivo.open(path, ios::in);

    if(!arquivo) {
        cerr << "Erro ao abrir o arquivo!" << endl;
        exit(EXIT_FAILURE);
    }

    int num = 1;

    while(!arquivo.eof()) {
        arquivo >> num;
        cout << num << " ";
    }

    arquivo.close();

}


int main() {
    header();
    linha_cima();
    cout << "\n\n\t\t\t\t\t";
    le_arquivo("teste.txt");
    linha_baixo();
    tabuleiro();
    cout << "\n\n\n";

    return 0;

}
