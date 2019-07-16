#include <iostream>
#include <string>
#include "pessoa.h"

using namespace std;

int main(){

        Pessoa pessoa1("Manoel");
        //pessoa1.setNome("Miguel Farias");
        pessoa1.setTelefone("8398889999");
        pessoa1.setIdade(14);

        Pessoa pessoa2("José", "83999999", 66);
        /*pessoa2.setNome("Rakel Farias");
           pessoa2.setTelefone("839880942");
           pessoa2.setIdade(21);
         */


        cout << "Nome:" << pessoa1.getNome() << endl;
        cout << "Telefone:" << pessoa1.getTelefone() << endl;
        cout << "Idade:" << pessoa1.getIdade() << endl;
        cout << "Nome:" << pessoa2.getNome() << endl;
        cout << "Telefone:" << pessoa2.getTelefone() << endl;
        cout << "Idade:" << pessoa2.getIdade() << endl;


        return 0;
}
