#include <iostream>
#include <string>
#include "Horario.hpp"

using namespace std;

int main(int argc, char const *argv[]) {

  Horario h1;
  Horario h2("20", "50", "20");
  Horario h3;
  h3.setHour("23");
  h3.setMinute("59");
  h3.setSecond("59");
  Horario h4;
  h4.setHorario("20", "29", "59");

  cout << h1.getHour() << ":" << h1.getMinute() << ":" << h1.getSecond() << endl;
  cout << h2.getHour() << ":" << h2.getMinute() << ":" << h2.getSecond() << endl;
  cout << h3.getHour() << ":" << h3.getMinute() << ":" << h3.getSecond() << endl;
  cout << h4.getHour() << ":" << h4.getMinute() << ":" << h4.getSecond() << endl;
  cout << endl;

  h1.avancarHorario();
  h2.avancarHorario();
  h3.avancarHorario();
  h4.avancarHorario();

  cout << h1.getHour() << ":" << h1.getMinute() << ":" << h1.getSecond() << endl;
  cout << h2.getHour() << ":" << h2.getMinute() << ":" << h2.getSecond() << endl;
  cout << h3.getHour() << ":" << h3.getMinute() << ":" << h3.getSecond() << endl;
  cout << h4.getHour() << ":" << h4.getMinute() << ":" << h4.getSecond() << endl;

  return 0;
}
