#ifndef CONTROLEGASTO_H
#define CONTROLEGASTO_H
#include "Despesa.h"
using namespace std;

//Classe ControleGasto composta por instância da classe Despesa;

class ControleGasto
{
    public:
        ControleGasto();

        void setDespesa(Despesa d,int pos); //esse metodo vai receber uma despesa e uma posicao e adicionar a despesa
                                            //ao vetor na posicao indicada; eh um bool e returna se tem ou n despesa
        double calculaTotalDespesas(); //retorna o valor total das despesas do sistema;
        bool existeDespesaDoTipo(string tipoGasto);  //verifica de dentre as despesas guardadas no ControleGasto se há alguma delas
        Despesa getDespesa(int pos);                                //que é do tipo passado;


    private:
        Despesa despesas[10];
};

#endif // CONTROLEGASTO_H
