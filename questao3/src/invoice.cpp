#include <iostream>
#include "invoice.h"
#include <iomanip>
#include <string>

using namespace std;

Invoice::Invoice(){
        setCodItem(111111);
        setQitem(0);
        setPreco(0.0);
        setDescr("Padrão");
}

void Invoice::setCodItem(int codItem){
        this->codItem = codItem;
}

void Invoice::setQitem(int qItem){
        if(qItem < 0) {
                qItem = 0;

        }else{

                this->qItem = qItem;
        }
}

void Invoice::setPreco(double preco){
        if(preco < 1) {
                cout << fixed;
                cout << setprecision(1);
                preco = 0;

        }else{
                this->preco = preco;
        }
}

void Invoice::setDescr(string descr){
        this->descr = descr;
}

void Invoice::setValor(){
        valorFat = preco*qItem;
}

int Invoice::getCodItem(){
        return codItem;
}

int Invoice::getQitem(){
        return qItem;
}

double Invoice::getPreco(){
        return preco;
}

string Invoice::getDescr(){
        return descr;
}

double Invoice::getInvoiceAmount(){
        return valorFat;
}
