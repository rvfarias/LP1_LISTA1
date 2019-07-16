#include <iostream>
#include <string>
#include "Data4.h"

using namespace std;

int main(){

        Data data1;
        //data1.setDia("01");
        //data1.setMes("10");
        //data1.setAno("2019");
        Data data2("02", "10", "1980");
        Data data3 = Data();
        data3.setDia("03");
        data3.setMes("15");
        data3.setAno("2000");
        Data data4 = Data();
        data4.setDia("50");
        data4.setMes("20");
        data4.setAno("2019");

        cout << "Data: " << data1.getDia() << "/" << data1.getMes() << "/" << data1.getAno() << endl;
        cout << "Data: " << data2.getDia() << "/" << data2.getMes() << "/" << data2.getAno() << endl;
        cout << "Data: " << data3.getDia() << "/" << data3.getMes() << "/" << data3.getAno() << endl;
        cout << "Data: " << data4.getDia() << "/" << data4.getMes() << "/" << data4.getAno() << endl;
        cout << endl;

        cout << "Anos bissextos:\n";
        cout << "Ano 1: " << data1.isBissexto() << endl;
        cout << "Ano 2: " << data2.isBissexto() << endl;
        cout << "Ano 3: " << data3.isBissexto() << endl;
        cout << "Ano 4: " << data4.isBissexto() << endl;
        cout << endl;

        cout << data1.getDia() << " de " << data1.getMesExtenso() << " de " << data1.getAno() << endl;
        cout << data2.getDia() << " de " << data2.getMesExtenso() << " de " << data2.getAno() << endl;
        cout << data3.getDia() << " de " << data3.getMesExtenso() << " de " << data3.getAno() << endl;
        cout << data4.getDia() << " de " << data4.getMesExtenso() << " de " << data4.getAno() << endl;

        return 0;
}
