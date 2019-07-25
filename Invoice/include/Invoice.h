#ifndef INVOICE_H
#define INVOICE_H
#include <iostream>


class Invoice   //invoice = fatura
{
    public:
        Invoice();
        Invoice(int num,int quant,double price,std::string desc);

        double getInvoiceAmout(int quant,double price);
        //metodos get
        int getNum();
        int getQuant();
        double getPrice();
        std::string getDesc();

        //metodos set
        void setNum(int num);
        void setQuant(int quant);
        void setPrice(double price);
        void setDesc(std::string desc);





    private:
        int num;
        int quant;
        double price;
        std::string desc;

};

#endif // INVOICE_H
