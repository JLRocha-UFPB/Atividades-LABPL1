#ifndef PAGAMENTO_H
#define PAGAMENTO_H
#include <iostream>


class Pagamento
{
    public:
        Pagamento();
        Pagamento(double valorPagamento,std::string nomeFuncionario);

        //metodos get
        double getValorPagamento();
        std::string getNomeFuncionario();

        //metodos set
        void setValorPagamento(double valorPagamento);
        void setNomeFuncionario(std::string nomeFuncionario);


    private:
        double valorPagamento = 0;
        std::string nomeFuncionario;
};

#endif // PAGAMENTO_H
