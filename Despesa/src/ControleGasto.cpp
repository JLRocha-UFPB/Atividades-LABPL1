#include "ControleGasto.h"

ControleGasto::ControleGasto()
{
}
double ControleGasto::calculaTotalDespesas(){
        double sum = 0;

        for(int i = 0;i < 10;i++){
            sum += despesas[i].getValor();
        }
        return sum;
    }

bool ControleGasto::existeDespesaDoTipo(string tipoGasto){
        for(int i = 0;i < 10;i++){
            if(tipoGasto == despesas[i].getTipoGasto()){
                return true;
            }
            else
                return false;
        }

    }

void ControleGasto::setDespesa(Despesa d,int pos){
    despesas[pos] = d;

}

Despesa ControleGasto::getDespesa(int pos){
    return despesas[pos];
}
