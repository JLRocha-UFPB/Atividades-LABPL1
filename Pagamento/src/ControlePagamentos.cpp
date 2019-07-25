#include "controlePagamento.h"

ControlePagamentos::ControlePagamentos()
{}

double ControlePagamentos::calculaTotalPagamentos(){
    double sum = 0;

    for(int i =0;i< 10;i++){
        sum += pagamentos[i].getValorPagamento();
    }
    return sum;
}

bool ControlePagamentos::existePagamentoParaFuncionario(string nomeFuncionario){
    for(int i =0;i<10;i++){
        if(nomeFuncionario == pagamentos[i].getNomeFuncionario())
            return true;
        else
            return false;
    }

}

void ControlePagamentos::setPagamentos(double valor){
    for(int i = 0;i < 10;i++){
        if(pagamentos[i].getValorPagamento() == 0){
            pagamentos[i].setValorPagamento(valor);
            break;
        }
    }

}





