#ifndef DESPESA_H
#define DESPESA_H
#include <iostream>
#include <string>


class Despesa
{
    public:
        Despesa();
        Despesa(double valor,std::string tipoGasto);

        //metodos get
        double getValor();
        std::string getTipoGasto();

        //metodos set
        void setValor(double valor);
        void setTipoGasto(std::string tipoGasto);


    private:
        double valor;
        std::string tipoGasto;
};

#endif // DESPESA_H
