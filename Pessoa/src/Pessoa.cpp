#include "Pessoa.h"

using namespace std;

Pessoa::Pessoa(string nome)
{}

Pessoa::Pessoa(int idade,string nome,string telefone){
    this ->idade = idade;
    this ->nome = nome;
    this ->telefone = telefone;

}

    int Pessoa::getIdade(){
        return idade;
    }
    string Pessoa::getNome(){
        return nome;
    }
    string Pessoa::getTelefone(){
        return telefone;
    }

    void Pessoa::setIdade(int idade){
        this ->idade = idade;
    }
    void Pessoa::setNome(string nome){
        this ->nome = nome;
    }
    void Pessoa::setTelefone(string telefone){
        this ->telefone = telefone;
    }









