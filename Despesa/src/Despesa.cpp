#include "Despesa.h"

using namespace std;

Despesa::Despesa()
{
    valor = 0;
    tipoGasto = "Sem Gastos";
}


Despesa::Despesa(double valor,string tipoGasto){
    this ->valor = valor;
    this ->tipoGasto = tipoGasto;
}


    double Despesa::getValor(){
        return valor;
    }

    string Despesa::getTipoGasto(){
        return tipoGasto;
    }


    void Despesa::setValor(double valor){
        if(valor < 0){
            this ->valor = 0;
        }else
            this ->valor = valor;
    }

    void Despesa::setTipoGasto(string tipoGasto){
        this ->tipoGasto = tipoGasto;
    }
