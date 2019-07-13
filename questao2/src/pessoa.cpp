#include <iostream>
#include <string>
#include "pessoa.h"

using namespace std;

Pessoa::Pessoa(std::string nome){
        setNome(nome);
}

Pessoa::Pessoa(std::string nome, std::string telefone, int idade){
        setNome(nome);
        setTelefone(telefone);
        setIdade(idade);
}

void Pessoa::setNome(std::string nome){
        this->nome = nome;
}
void Pessoa::setTelefone(std::string telefone){
        this->telefone = telefone;
}
void Pessoa::setIdade(int idade){
        this->idade = idade;
}
std::string Pessoa::getNome(){
        return nome;
}
std::string Pessoa::getTelefone(){
        return telefone;
}
int Pessoa::getIdade(){
        return idade;
}
