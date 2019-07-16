#ifndef INVOICE_H_INCLUDED
#define INVOICE_H_INCLUDED

#include <string>

using namespace std;

class Invoice {

private:
    int codItem;                                //N�mero do item faturado
    int qItem;                                  //Quantidade compreda do item
    double preco;                               //Pre�o unit�rio
    double valorFat;                            //Valor da fatura
    string descr;                               //Descri��o do item


public:
    Invoice();                                  //Construtor de inicializa��o
    //M�todos set
    void setCodItem(int codItem);
    void setQitem(int qItem);
    void setPreco(double preco);
    void setDescr(string descr);
    void setValor();

    //M�todos get
    int getCodItem();
    int getQitem();
    double getPreco();
    string getDescr();
    double getInvoiceAmount();

};

#endif // INVOICE_H_INCLUDED
