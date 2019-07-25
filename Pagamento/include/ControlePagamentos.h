#ifndef CONTROLEPAGAMENTOS_H
#define CONTROLEPAGAMENTOS_H
#include "Pagamento.h"

using namespace std;


class ControlePagamentos
{
    public:
        ControlePagamentos();

        void setPagamentos(double valor);
        double calculaTotalPagamentos();
        bool existePagamentoParaFuncionario(string nomeFuncionario);


    private:
        Pagamento pagamentos[10];
};

#endif // CONTROLEPAGAMENTOS_H
