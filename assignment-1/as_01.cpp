#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;


void header() {
    string universidade("UNIVERSIDADE FEDERAL DO PARANA");
    string curso("TADS - TECNOLOGIA EM ANALISE E DESENVOLVIMENTO DE SISTEMAS");
    string disciplina("DS130 - ESTRUTURA DE DADOS");

    /*
        NOTA SOBRE AS CORES:
        Inicia a string com os caracteres escapados: \033[x;y;zm
        Termina a string com os caracteres escapados: \033[0m
        Onde: x, y e z são aos códigos de cores e efeitos. Para adicionar, use ; como serparador
        e inclua o código desejado.
        Cores de fundo não aparecem em tabulações, apenas em espaços.

        Tabela de cores e efeitos.
        EFEITOS:
        0 - reset
        1 - negrito/brilhante (geralmente uma versão mais brilhante da cor)
        4 - sublinhado
        7 - cores de letra e fundo invertidas
        21 - negrito/brilhante desligado
        24 - sublinhado desligado
        27 - inversão de cores desligado

        CORES DE LETRAS:
        30 - preto
        31 - vermelho
        32 - verde
        33 - amarelo
        34 - azul
        35 - magenta
        36 - ciano
        37 - branco

        CORES DE FUNDO:
        40 - preto
        41 - vermelho
        42 - verde
        43 - amarelo
        44 - azul
        45 - magenta
        46 - ciano
        47 - branco

    */

    /*
        NOTA SOBRE AS DIMENSÕES:
        Do começo da tela até o início do quadrado: 6 tabs || 48 espaços
        Do primeiro caractere do quadrado até o último caractere: 62 espaços
    */


    cout << "\n\n";
    cout << "\n\t\t\t\t\t     \033[1;33;45m\u2554\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2557\033[0m";
    cout << "\n\t\t\t\t\t     \033[1;33;45m\u2551\033[0m";
    cout << "\033[1;33;45m                                                              \u2551\033[0m";
    cout << "\n\t\t\t\t\t     \033[1;33;45m\u2551" <<"                " << universidade << "               " <<" \u2551\033[0m";
    cout << "\n\t\t\t\t\t     \033[1;33;45m\u2551" << " " << curso << "   " << "\u2551\033[0m";
    cout << "\n\t\t\t\t\t     \033[1;33;45m\u2551" << "                  " << disciplina << "                  " << "\u2551\033[0m";
    cout << "\n\t\t\t\t\t     \033[1;33;45m\u2551";
    cout << "                                                              \u2551\033[0m";
    cout << "\n\t\t\t\t\t     \033[1;33;45m\u255A\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u255D\033[0m";
    
}


void dado_alunos() {
    /*
        NOTA SOBRE AS DIMENSÕES:
        A linha tem 124 espaços; Um tab a mais, são 8 espaços.
        Logo, a conta deve ser feita para que tudo caiba dento de 108 espaços. 124 - 16 (8 pra cada lado)
    */

    string nome1("ANOTHER FRIEND O'MINE \u26A1"); //22
    string nome2("VICTOR HUGO FARIAS \u2615"); //20
    int dados1 = 00000000, dados2 = 00000000; //8
    //dados aluno x: -> 18
    //Nome: -> 6 
    //GRR: -> 5

    //1ªlinha: 108 - 22(string) - 22(msm string) = 64(qtd espaços)
    //2ªlinha: 108 - 4(string) - 22(nome1) - 4(msm string) - 20(nome2) = 54(qtd espaços) - 2(considerando os espaços ocupados pelo emoji)
    //3ªlinha: 108 - 5(string) - 8(grr1) - 5(msm string) - 8(grr2) = 82(qtd espaços)
    cout << "\n\n\t\t\t" << "\u272F Dados do aluno 1 \u272F" << "                                                                " << "\u272F Dados do aluno 2 \u272F";
    cout << "\n\n\t\t\t" << "Nome: " << nome1 << "                                                    " << "Nome:" << nome2;
    cout << "\n\n\t\t\t" << "XYZ: " << dados1 << "                                                                                  " << "XYZ: " << dados2;
    
}


void linha_cima() {
    cout << "\n\n\t\t\u250C\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500"; //50
    cout << " " << "\u002A\u002E\u00B7\u003A\u002E\u002A\u263E\u2727 \u2735 \u2727\u263D\u002A\u002E\u00B7\u003A\u002E\u002A"; //20
    cout << " " << "\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2510"; //50

}


void linha_baixo() {
    cout << "\n\n\t\t\u2514\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500"; //50
    cout << " " << "\u002A\u002E\u00B7\u003A\u002E\u002A\u263E\u2727 \u2735 \u2727\u263D\u002A\u002E\u00B7\u003A\u002E\u002A"; //20
    cout << " " << "\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2518"; //50

}


void footer() {
    string tema("\033[4mEaD Tarefa 01 - Telas\033[0m");
    string objetivo("\033[4mProducao da tela de introducao do trabalho, customizada com caracteres ASCII\033[0m");

    cout << "\n\n\t\t\t\t\t\t\t\t" << "    " << tema;
    cout << "\n\n\t\t\t\t" << "       "  << objetivo;

}


void tabuleiro() {
    /*
        Tabuleiro:
        Pretas
            \033[42;30m
            \033[0m
        Brancas
            \033[47;30m
            \033[0m

        Peças Pretas
            Torre - \u265C
            Cavalo - \u265E
            Bispo - \u265D
            Rei - \u265A
            Rainha - \u265B
            Peão - \u265F

        Peças Brancas
            Torre - \u2656
            Cavalo - \u2658
            Bispo - \u2657
            Rei - \u2654
            Rainha - \u2655
            Peão - \u2659

    */

    //peças pretas
    cout << "\n\n\n\t\t\t\t\t\t\t\t      \033[42;30m\u265C \033[0m" //torre
    << "\033[47;30m\u265E \033[0m" //cavalo
    << "\033[42;30m\u265D \033[0m" // bispo
    << "\033[47;30m\u265A \033[0m" //rei
    << "\033[42;30m\u265B \033[0m" //rainha
    << "\033[47;30m\u265D \033[0m" //bispo
    << "\033[42;30m\u265E \033[0m" //cavalo
    << "\033[47;30m\u265C \033[0m"; //torre

    //peões
    cout << "\n\t\t\t\t\t\t\t\t      \033[47;30m\u265F \033[0m" 
    << "\033[42;30m\u265F \033[0m"
    << "\033[47;30m\u265F \033[0m"
    << "\033[42;30m\u265F \033[0m"
    << "\033[47;30m\u265F \033[0m"
    << "\033[42;30m\u265F \033[0m"
    << "\033[47;30m\u265F \033[0m"
    << "\033[42;30m\u265F \033[0m";
    
    //linha vazia verde
    cout << "\n\t\t\t\t\t\t\t\t      \033[42;30m  \033[0m" 
    << "\033[47;30m  \033[0m"
    << "\033[42;30m  \033[0m"
    << "\033[47;30m  \033[0m"
    << "\033[42;30m  \033[0m"
    << "\033[47;30m  \033[0m"
    << "\033[42;30m  \033[0m"
    << "\033[47;30m  \033[0m";
    
    //linha vazia branco
    cout << "\n\t\t\t\t\t\t\t\t      \033[47;30m  \033[0m" 
    << "\033[42;30m  \033[0m"
    << "\033[47;30m  \033[0m"
    << "\033[42;30m  \033[0m"
    << "\033[47;30m  \033[0m"
    << "\033[42;30m  \033[0m"
    << "\033[47;30m  \033[0m"
    << "\033[42;30m  \033[0m";
    
    //linha vazia verde
    cout << "\n\t\t\t\t\t\t\t\t      \033[42;30m  \033[0m" 
    << "\033[47;30m  \033[0m"
    << "\033[42;30m  \033[0m"
    << "\033[47;30m  \033[0m"
    << "\033[42;30m  \033[0m"
    << "\033[47;30m  \033[0m"
    << "\033[42;30m  \033[0m"
    << "\033[47;30m  \033[0m";
    
    //linha vazia branco
    cout << "\n\t\t\t\t\t\t\t\t      \033[47;30m  \033[0m" 
    << "\033[42;30m  \033[0m"
    << "\033[47;30m  \033[0m"
    << "\033[42;30m  \033[0m"
    << "\033[47;30m  \033[0m"
    << "\033[42;30m  \033[0m"
    << "\033[47;30m  \033[0m"
    << "\033[42;30m  \033[0m";
    
    //peões
    cout << "\n\t\t\t\t\t\t\t\t      \033[42;30m\u2659 \033[0m" 
    << "\033[47;30m\u2659 \033[0m"
    << "\033[42;30m\u2659 \033[0m"
    << "\033[47;30m\u2659 \033[0m"
    << "\033[42;30m\u2659 \033[0m"
    << "\033[47;30m\u2659 \033[0m"
    << "\033[42;30m\u2659 \033[0m"
    << "\033[47;30m\u2659 \033[0m";

    //peças brancas
    cout << "\n\t\t\t\t\t\t\t\t      \033[47;30m\u2656 \033[0m" //torre
    << "\033[42;30m\u2658 \033[0m" //cavalo
    << "\033[47;30m\u2657 \033[0m" //bispo
    << "\033[42;30m\u2654 \033[0m" //rei
    << "\033[47;30m\u2655 \033[0m" //rainha
    << "\033[42;30m\u2657 \033[0m" //bispo
    << "\033[47;30m\u2658 \033[0m" //cavalo
    << "\033[42;30m\u2656 \033[0m"; //torre

}


int main() {
    header();
    linha_cima();
    dado_alunos();
    linha_baixo();    
    footer();
    tabuleiro();

    cout << "\n\n\n";
    
}

