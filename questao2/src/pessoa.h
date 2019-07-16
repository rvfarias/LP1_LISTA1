#ifndef PESSOA_H
#define PESSOA_H

#include <iostream>
#include <string>

using namespace std;

class Pessoa {
private:
std::string nome;
std::string telefone;
int idade;

public:
Pessoa();
Pessoa(std::string nome);                                                   //Construtor 1
Pessoa(std::string nome, std::string telefone, int idade);                  //Construtor 2
//virtual ~Pessoa();

void setNome(std::string nome);
void setTelefone(std::string telefone);
void setIdade(int idade);
std::string getNome();
std::string getTelefone();
int getIdade();

};


#endif //PESSOA_H
