#include <iostream>
#include <string>
#include "questao4.h"

Data::Data(){
    dia = 01;
    mes = 01;
    ano = 0001;
}

Data::Data(int d, int m, int a){

    dia = ((d >= 1) && (d <=31)) ? d: 1;
    mes = ((m >= 1) && (m <=12)) ? m: 1;
}

void setdia(){
}
void setmes(){
}
void setano(){
}
int getdia(){
}
int getmes(){
}
int getdia(){
}
