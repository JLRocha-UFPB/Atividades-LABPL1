#ifndef PESSOA_H
#define PESSOA_H
#include <iostream>


class Pessoa
{
    public:
        Pessoa(std::string nome);
        Pessoa(int idade,std::string nome,std::string telefone);

        //metodos get
        int getIdade();
        std::string getNome();
        std::string getTelefone();

        //metodos set
        void setIdade(int idade);
        void setNome(std::string nome);
        void setTelefone(std::string telefone);


    private:
        int idade;
        std::string nome;
        std::string telefone;

};

#endif // PESSOA_H
