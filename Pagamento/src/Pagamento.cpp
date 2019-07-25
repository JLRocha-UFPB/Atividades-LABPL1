#include "Pagamento.h"


using namespace std;
Pagamento::Pagamento()
{}

Pagamento::Pagamento(double valorPagamento,std::string nomeFuncionario){
    this ->valorPagamento = valorPagamento;
    this ->nomeFuncionario = nomeFuncionario;
}


double Pagamento::getValorPagamento(){
    return valorPagamento;
}

string Pagamento::getNomeFuncionario(){
    return nomeFuncionario;
}


void Pagamento::setValorPagamento(double valorPagamento){
    if(valorPagamento > 0){
        this ->valorPagamento = valorPagamento;
    }
    else
        this ->valorPagamento = 0;
}

void Pagamento::setNomeFuncionario(string nomeFuncionario){
    this ->nomeFuncionario = nomeFuncionario;
}
