#ifndef HORARIO_HPP
#define HORARIO_HPP

#include <string>
using namespace std;

class Horario{
private:
  string hour;                                   //Varivel que recebe as horas
  string minute;                                    //Varivel que recebe os minutos
  string second;                                    //Varivel que recebe os segundos

public:
  //Construtores
  Horario();
  Horario(string hour, string minute, string second);

  //Metodos get e set
  void setHour(string hora);
  void setMinute(string min);
  void setSecond(string seg);
  void setHorario(string hora, string min, string seg);
  string getHour();
  string getMinute();
  string getSecond();

  //Metodo para avançar horario
  void avancarHorario();

};

#endif
