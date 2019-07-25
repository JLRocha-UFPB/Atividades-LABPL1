#include <iostream>
#include "Invoice.h"

using namespace std;

int main()
{
    Invoice fatura;

    fatura.setNum(10);
    fatura.setQuant(5);
    fatura.setPrice(10.55);
    fatura.setDesc("teclado");

    cout <<fatura.getNum() << endl;
    cout <<fatura.getQuant() << endl;
    cout <<fatura.getPrice() <<endl;
    cout <<fatura.getDesc() << endl;

    cout <<fatura.getInvoiceAmout(10,10.50) << endl;


    return 0;
}
