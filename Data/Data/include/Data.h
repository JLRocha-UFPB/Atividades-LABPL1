#ifndef DATA_H
#define DATA_H
#include <iostream>



class Data
{
    public:
        Data();
        Data(int dia,int mes,int ano);


        void avancarDia();
        //Metodos Get
        int getDia();
        int getMes();
        int getAno();
        //Metodos Set
        void setDia(int dia);
        void setMes(int mes);
        void setAno(int ano);


    private:
        int dia;
        int mes;
        int ano;
};
#endif // DATA_H
