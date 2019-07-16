#include <iostream>
#include <string>
#include "Data4.h"

using namespace std;

Data::Data(){

          this->dia = "01";
          this->mes = "01";
          this->ano = "0001";
}

Data::Data(string dia, string mes, string ano){

        this->dia = dia;
        this->mes = mes;
        this->ano = ano;
}


void Data::setDia(string dia){

        if(dia > "00" && dia < "32") {

                if(mes == "01" || mes == "03" || mes == "05" || mes == "07" || mes == "08" || mes == "10" || mes == "12") {

                        this->dia = dia;
                }

                else if(mes == "04" || mes == "06" || mes == "09" || mes == "11") {
                        if(dia <= "30") {
                                this->dia = dia;

                        }else{
                                this->dia = "01";
                        }
                }

                else if(mes == "02") {

                        if(dia <= "28") {
                                this->dia = dia;

                        }else{
                                this->dia = "01";
                        }
                }

        }else{
                this->dia = "01";
        }
}

void Data::setMes(string mes){

        if(mes > "00" && mes < "13") {

                this->mes = mes;

        }else{
                mes = "01";
        }

}

void Data::setAno(string ano){

        this->ano = ano;

}


string Data::getDia(){

        return dia;
}

string Data::getMes(){

        return mes;
}

string Data::getAno(){

        return ano;
}

/*int Data::compara(const Data &objeto)const{

   }
 */

string Data::getMesExtenso(){

        if(mes == "01") {
          return "janeiro";
        }
        else if(mes == "02"){
          return "fevereiro";
        }
        else if(mes == "03"){
          return "marco";
        }
        else if(mes == "04"){
          return "abril";
        }
        else if(mes == "05"){
          return "maio";
        }
        else if(mes == "06"){
          return "junho";
        }
        else if(mes == "07"){
          return "julho";
        }
        else if(mes == "08"){
          return "agosto";
        }
        else if(mes == "09"){
          return "setembro";
        }
        else if(mes == "10"){
          return "outubro";
        }
        else if(mes == "11"){
          return "novembro";
        }
        else{
          return "dezembro";
        }
}
bool Data::isBissexto(){

        int a = stoi(ano);

        if(a%4 == 0 && a%100!=0) {

                return true;

        }
        else if(a%400 == 0) {

                return true;
        }else{
                return false;
        }
}
