#include "Invoice.h"

using namespace std;

Invoice::Invoice()
{}

Invoice::Invoice(int num,int quant,double price,string desc){
    this ->num = num;
    this ->quant = quant;
    this ->price = price;
    this ->desc = desc;
}

    int Invoice::getNum(){
        return num;
    }

    int Invoice::getQuant(){
        return quant;
    }

    double Invoice::getPrice(){
        return price;
    }

    string Invoice::getDesc(){
        return desc;
    }

    void Invoice::setNum(int num){
        this ->num = num;
    }
    void Invoice::setQuant(int quant){
        this ->quant =  quant;
    }
    void Invoice::setPrice(double price){
        this ->price = price;
    }
    void Invoice::setDesc(string desc){
        this ->desc = desc;
    }

    double Invoice::getInvoiceAmout(int quant,double price){
        if(quant > 0){
            return quant * price;
        }
        else if(quant < 0)
            return 0;

        else if(price < 0)
            return 0;

    }







