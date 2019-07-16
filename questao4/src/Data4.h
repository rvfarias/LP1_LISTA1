#ifndef DATA_4_H
#define DATA_4_H

#include <string>

using namespace std;

class Data{

    private:
    string dia;
    string mes;
    string ano;

    public:
    Data();                                              //Construtor de inicialização
    Data(string dia, string mes, string ano);            //Construror 2

    void setDia(string dia);
    void setMes(string mes);
    void setAno(string ano);
    string getDia();
    string getMes();
    string getAno();
    //int compara(const Data &objeto) const;
    string getMesExtenso();
    bool isBissexto();
};


#endif // Data__H
