#include <iostream>
#include <iomanip>
#include <string>
#include "invoice.h"

using namespace std;

int main(){

        Invoice in1;
        Invoice in2;
        Invoice in3;
        Invoice in4;
        
        in1.setValor();
        in2.setCodItem(2220003);
        in2.setDescr("Usado");
        in2.setPreco(70.00);
        in2.setQitem(4);
        in2.setValor();
        in3.setCodItem(32432444);
        in3.setDescr("Completo");
        in3.setPreco(149.99);
        in3.setQitem(-2);
        in3.setValor();
        in4.setCodItem(12346321);
        //in4.setDescr();
        in4.setPreco(-200.00);
        in4.setQitem(5);
        in4.setValor();

        cout << "Numero: " << in1.getCodItem() << endl;
        cout << "Quatidade comprada: " << in1.getQitem() << endl;
        cout << "Preço do item: " << in1.getPreco() << endl;
        cout << "Descrição: " << in1.getDescr() << endl;
        cout << "Valor total: " << in1.getInvoiceAmount() << endl;
        cout << endl;

        cout << "Numero: " << in2.getCodItem() << endl;
        cout << "Quatidade comprada: " << in2.getQitem() << endl;
        cout << "Preço do item: " << in2.getPreco() << endl;
        cout << "Descrição: " << in2.getDescr() << endl;
        cout << "Valor total: " << in2.getInvoiceAmount() << endl;
        cout << endl;

        cout << "Numero: " << in3.getCodItem() << endl;
        cout << "Quatidade comprada: " << in3.getQitem() << endl;
        cout << "Preço do item: " <<  in3.getPreco() << endl;
        cout << "Descrição: " << in3.getDescr() << endl;
        cout << "Valor total: " << in3.getInvoiceAmount() << endl;
        cout << endl;

        cout << "Numero: " << in4.getCodItem() << endl;
        cout << "Quatidade comprada: " << in4.getQitem() << endl;
        cout << "Preço do item: " <<  in4.getPreco() << endl;
        cout << "Descrição: " << in4.getDescr() << endl;
        cout << "Valor total: " << in4.getInvoiceAmount() << endl;
        cout << endl;

        return 0;
}
