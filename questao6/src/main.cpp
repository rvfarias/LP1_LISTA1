#include <iostream>
#include <string>
#include "Flight.hpp"

using namespace std;

int main(int argc, char const *argv[]) {

    Flight f1(2555, "12/05/2019", "16:50");                         //Objeto 1
    Flight f2(3255, "20/12/2019", "06:30");                         //Objeto 2
    Flight f3(1367, "30/09/2015", "22:00");                         //Objeto 3

    //Teste 1
    cout << "\nVoo 1:" << '\n';
    cout << "Numero do voo: " << f1.getNumFlight() << endl;
    cout << "Data do voo: " << f1.getDate() << endl;
    cout << "Hora do voo: " << f1.getTime() << endl;

    cout << "\nTestes da funções:\n";
    cout << f1.verify(2) << endl;
    cout << f1.occupy(15) << endl;
    cout << "Numero do assento: " << f1.nextFree() << endl;
    cout << "Numero de vagas disponiveis: " << f1.vacancies() << endl;

    //Teste 2
    cout << "\nVoo 2:" << '\n';
    cout << "Numero do voo: " << f2.getNumFlight() << endl;
    cout << "Data do voo: " << f2.getDate() << endl;
    cout << "Hora do voo: " << f2.getTime() << endl;

    cout << "\nTestes da funções:\n";
    cout << f2.verify(60) << endl;
    cout << f2.occupy(13) << endl;
    cout << "Numero do assento: " << f2.nextFree() << endl;
    cout << "Numero de vagas disponiveis: " << f2.vacancies() << endl;

    //Teste 3
    cout << "\nVoo 3:" << '\n';
    cout << "Numero do voo: " << f3.getNumFlight() << endl;
    cout << "Data do voo: " << f3.getDate() << endl;
    cout << "Hora do voo: " << f3.getTime() << endl;

    cout << "\nTestes da funções:\n";
    cout << f3.verify(29) << endl;
    cout << f3.occupy(50) << endl;
    cout << "Numero do assento: " << f3.nextFree() << endl;
    cout << "Numero de vagas disponiveis: " << f3.vacancies() << endl;

  return 0;
}
