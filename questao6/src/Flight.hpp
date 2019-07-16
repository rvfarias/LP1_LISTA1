#ifndef FLIGHT_HPP
#define FLIGHT_HPP

#include <iostream>
#include <string>

using namespace std;

class Flight {

private:
static int totalSeat;                           //Variavel que armazena o numero total de assentos
int numFlight;                                  //Variavel que armazena o numero do voo
int numSeat;                                    //Variavel que aramzena o numero do assento
string date;                                    //Variavel que armazena a data do voo
string time;                                    //Variavel que armazena o horario do voo
bool availableSeat[100];                        //Array que aramzena o disponibilidade do assento

public:
Flight(int numFlight, string date, string time);              //Construtor

int nextFree();                                       //Metodo que retorna o assento livre mais proximo
int vacancies();                                      //Metodo que retorna o numero de assentos disponiveis
string verify(int numSeat);                           //Metodo que verifica disponibilidade do assento
bool occupy(int numSeat);                             //Metodo que verifa um assento se livre mais proximo

//Metodos set
void setNumFlight(int numFlight);
void setNumSeat(int numSeat);
void setDate(string date);
void setTime(string time);

//Metodos get
int getNumFlight();
int getNumSeat();
string getDate();
string getTime();

};

#endif
