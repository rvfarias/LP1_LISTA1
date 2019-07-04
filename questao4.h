#ifndef QUESTAO4_H_INCLUDED
#define QUESTAO4_H_INCLUDED

#include <iostream>
#include <int>

using namespace std;

class Data{

    private:
    int dia;
    int mes;
    int ano;

    public:
    Data();                                     //CONSTRUTOR VAZIO
    Data(int dia, int mes, int ano);            //CONSTRUTOR DE INICIALIZAÇÃO

    void setdia(int dia);
    void setmes(int mes);
    void setano(int ano);
    int getdia(int dia);
    int getmes(int mes);
    int getano(int ano);
    int compara();
    int getMesExtenso();
    int isBissexto();
}


#endif // QUESTAO4_H_INCLUDED
